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
void	ft_lstadd(t_list **alst, t_list *new);


void test_ft_lstadd()
{
    // Adding to an empty list
    t_list *head = NULL;
    t_list *new_node = ft_lstnew(strdup("New Head"), strlen("New Head") + 1);
    assert(new_node != NULL);

    ft_lstadd(&head, new_node);
    assert(head == new_node);
    assert(strcmp(head->content, "New Head") == 0);

    // Adding to a non-empty list
    t_list *old_head = ft_lstnew(strdup("Second Node"), strlen("Second Node") + 1);
    assert(old_head != NULL);
    old_head->next = head;
    head = old_head;

    t_list *another_new = ft_lstnew(strdup("Newest Head"), strlen("Newest Head") + 1);
    assert(another_new != NULL);

    ft_lstadd(&head, another_new);
    assert(head == another_new);
    assert(strcmp(head->content, "Newest Head") == 0);
    assert(head->next == old_head);
    assert(strcmp(head->next->content, "Second Node") == 0);
    assert(head->next->next == new_node);
    assert(strcmp(head->next->next->content, "New Head") == 0);

    // Adding a NULL node (should do nothing)
    t_list *before = head;
    ft_lstadd(&head, NULL);
    assert(head == before);

    // Passing NULL as the list (should not crash)
    ft_lstadd(NULL, new_node);

    printf("All tests passed.\n");

    // Free memory
    free(head->next->next->content);
    free(head->next->next);
    free(head->next->content);
    free(head->next);
    free(head->content);
    free(head);
}

int main()
{
    test_ft_lstadd();
    return 0;
}

