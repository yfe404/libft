#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
} t_list;

// Prototype of ft_lstnew
t_list *ft_lstnew(void const *content, size_t content_size);

// Test 1: Basic Test with Valid Content
void test_ft_lstnew_basic() {
    char *str = "Hello, world!";
    size_t size = strlen(str) + 1;

    t_list *node = ft_lstnew(str, size);

    assert(node != NULL);
    assert(node->content != NULL);
    assert(strcmp(node->content, str) == 0);  // Check if content is correctly copied
    assert(node->content_size == size);  // Check if content size is correct
    assert(node->next == NULL);  // Ensure next is initialized to NULL

    free(node->content);
    free(node);
}

// Test 2: Test with NULL Content
void test_ft_lstnew_null_content() {
    t_list *node = ft_lstnew(NULL, 10);

    assert(node != NULL);
    assert(node->content == NULL);  // Check if content is NULL
    assert(node->content_size == 0);  // Check if content_size is 0
    assert(node->next == NULL);  // Ensure next is initialized to NULL

    free(node);
}

// Test 3: Test with Zero Content Size
void test_ft_lstnew_zero_size() {
    char *str = "Hello, world!";
    size_t size = 0;

    t_list *node = ft_lstnew(str, size);

    assert(node != NULL);
    assert(node->content != NULL);  // Check if content is correctly copied
    assert(node->content_size == 0);  // Content size should be 0 as it was passed as 0
    assert(strcmp(node->content, str) != 0);  // The content shouldn't be "Hello, world!" as content size was 0
    assert(node->next == NULL);  // Ensure next is initialized to NULL

    free(node->content);
    free(node);
}

// Test 4: Test with NULL Pointer for Content and Zero Content Size
void test_ft_lstnew_null_content_and_zero_size() {
    t_list *node = ft_lstnew(NULL, 0);

    assert(node != NULL);
    assert(node->content == NULL);  // Check if content is NULL
    assert(node->content_size == 0);  // Check if content_size is 0
    assert(node->next == NULL);  // Ensure next is initialized to NULL

    free(node);
}

// Test 5: Test with Large Content
void test_ft_lstnew_large_content() {
    char *str = malloc(1000000);
    memset(str, 'A', 1000000);  // Fill the content with 'A's
    size_t size = 1000000;

    t_list *node = ft_lstnew(str, size);

    assert(node != NULL);
    assert(node->content != NULL);
    assert(memcmp(node->content, str, size) == 0);  // Ensure content is correctly copied
    assert(node->content_size == size);  // Ensure content size is correct
    assert(node->next == NULL);  // Ensure next is NULL

    free(node->content);
    free(node);
    free(str);
}

// Test 6: Check Allocation Failure (Simulated here)
void test_ft_lstnew_allocation_failure() {
    // This test is highly platform-dependent, and cannot be easily simulated in normal conditions
    // You can try running the tests on a system with limited memory to see how malloc reacts
    t_list *node = ft_lstnew("Test", 5);
    
    if (node == NULL) {
        printf("Memory allocation failed as expected\n");
    } else {
        free(node->content);
        free(node);
    }
}

// Test 7: Check `next` Pointer Initialization
void test_ft_lstnew_next_initialization() {
    char *str = "Next initialization test";
    size_t size = strlen(str) + 1;

    t_list *node1 = ft_lstnew(str, size);
    t_list *node2 = ft_lstnew("Second node", 12);

    // Link node1 to node2
    node1->next = node2;

    assert(node1 != NULL);
    assert(node1->next == node2);  // Ensure next is correctly set
    assert(node2->next == NULL);  // node2's next should still be NULL

    free(node1->content);
    free(node1);
    free(node2->content);
    free(node2);
}

int main() {
    test_ft_lstnew_basic();
    test_ft_lstnew_null_content();
    test_ft_lstnew_zero_size();
    test_ft_lstnew_null_content_and_zero_size();
    test_ft_lstnew_large_content();
    test_ft_lstnew_allocation_failure();
    test_ft_lstnew_next_initialization();

    printf("All tests passed!\n");
    return 0;
}

