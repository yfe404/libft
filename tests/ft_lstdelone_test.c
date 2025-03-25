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
void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t));


// Helper function to free content
void del_function(void *content, size_t size)
{
    (void)size;  // Unused parameter
    free(content);
}

void test_ft_lstdelone()
{
    // 1. Basic deletion of a single-node list
    t_list *node = ft_lstnew(strdup("Hello"), 6);
    assert(node != NULL);
    ft_lstdelone(&node, del_function);
    assert(node == NULL);  // Must be NULL after deletion

    // 2. Deleting the first node in a two-node list (No re-linking)
    t_list *node1 = ft_lstnew(strdup("First"), 6);
    t_list *node2 = ft_lstnew(strdup("Second"), 7);
    node1->next = node2;  // Linking nodes
    ft_lstdelone(&node1, del_function);
    assert(node1 == NULL);  // Only node1 should be deleted
    assert(node2 != NULL && strcmp(node2->content, "Second") == 0);  // node2 should remain unchanged

    // 3. Deleting a middle node (parent should not be modified)
    t_list *node3 = ft_lstnew(strdup("Middle"), 7);
    node2->next = node3;
    ft_lstdelone(&node2->next, del_function);  // Delete node3
    assert(node2->next == NULL);  // The next pointer must not be freed but should be NULL

    // 4. Deleting the last node in a multi-node list
    ft_lstdelone(&node2, del_function);
    assert(node2 == NULL);  // Last node should be freed

    // 5. NULL pointer test
    ft_lstdelone(NULL, del_function);  // Should do nothing and not crash

    // 6. NULL del function test (should just free the node but not content)
    t_list *node4 = ft_lstnew(strdup("No delete"), 10);
    ft_lstdelone(&node4, NULL);  // No crash expected, but content will leak
    assert(node4 == NULL);

    printf("All tests passed!\n");
}

int main()
{
    test_ft_lstdelone();
    return 0;
}

