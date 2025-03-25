#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
} t_list;

t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));


// **Helper function to modify content**
void modify_content(t_list *elem)
{
    if (elem && elem->content)
    {
        char *str = (char *)elem->content;
        while (*str)
        {
            *str = (*str >= 'a' && *str <= 'z') ? (*str - 32) : *str; // Convert to uppercase
            str++;
        }
    }
}

// **Test function**
void test_ft_lstiter()
{

    // 1. Test applying function to a single-node list
    t_list *node1 = ft_lstnew(strdup("hello"), 6);
    assert(node1 != NULL);
    ft_lstiter(node1, modify_content);
    assert(strcmp((char *)node1->content, "HELLO") == 0);
    free(node1->content);
    free(node1);

    // 2. Test applying function to a multi-node list
    t_list *head = ft_lstnew(strdup("first"), 6);
    t_list *mid = ft_lstnew(strdup("second"), 7);
    t_list *last = ft_lstnew(strdup("third"), 6);
    head->next = mid;
    mid->next = last;

    ft_lstiter(head, modify_content);
    assert(strcmp((char *)head->content, "FIRST") == 0);
    assert(strcmp((char *)mid->content, "SECOND") == 0);
    assert(strcmp((char *)last->content, "THIRD") == 0);

    free(head->content);
    free(mid->content);
    free(last->content);
    free(head);
    free(mid);
    free(last);

    // 3. Test with an empty list (should do nothing)
    t_list *empty_list = NULL;
    ft_lstiter(empty_list, modify_content); // Should not crash

    // 4. Test with NULL function pointer (should do nothing)
    t_list *node2 = ft_lstnew(strdup("unchanged"), 10);
    ft_lstiter(node2, NULL); // Should not crash
    assert(strcmp((char *)node2->content, "unchanged") == 0);
    free(node2->content);
    free(node2);

    printf("All tests passed!\n");
}

// **Main function**
int main()
{
    test_ft_lstiter();
    return 0;
}

