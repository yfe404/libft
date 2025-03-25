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
void	ft_lstdel(t_list **alst, void (*del)(void*, size_t));


// Helper function to free content
void del_function(void *content, size_t size)
{
    (void)size;  // Unused parameter
    free(content);
}

void test_ft_lstdel()
{
    // 1. Deleting a single-node list
    t_list *node1 = ft_lstnew(strdup("Hello"), 6);
    assert(node1 != NULL);
    ft_lstdel(&node1, del_function);
    assert(node1 == NULL);  // The list should be completely freed

    // 2. Deleting a multi-node list
    t_list *head = ft_lstnew(strdup("First"), 6);
    t_list *mid = ft_lstnew(strdup("Second"), 7);
    t_list *last = ft_lstnew(strdup("Third"), 6);
    head->next = mid;
    mid->next = last;

    ft_lstdel(&head, del_function);
    assert(head == NULL);  // The entire list should be deleted

    // 3. Deleting an already NULL list (should do nothing)
    t_list *null_list = NULL;
    ft_lstdel(&null_list, del_function);
    assert(null_list == NULL);  // Should remain NULL

 	// 4. NULL function pointer test (should free nodes but NOT crash)
    t_list *node2 = ft_lstnew(strdup("No delete"), 10);
    t_list *node3 = ft_lstnew(strdup("Still here"), 11);
    node2->next = node3;

    ft_lstdel(&node2, NULL);
    assert(node2 == NULL);  // The entire list should still be freed

    printf("All tests passed!\n");
}

int main()
{
    test_ft_lstdel();
    return 0;
}



