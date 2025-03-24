#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Function prototype
char *ft_strjoin(char const *s1, char const *s2);

// Test cases
void test_ft_strjoin() {
    char *result;

    // Test 1: Concatenating two normal strings
    result = ft_strjoin("Hello, ", "world!");
    assert(result != NULL);
    assert(strcmp(result, "Hello, world!") == 0);
    free(result);

    // Test 2: Concatenating empty string with a normal string
    result = ft_strjoin("", "World");
    assert(result != NULL);
    assert(strcmp(result, "World") == 0);
    free(result);

    // Test 3: Concatenating a normal string with an empty string
    result = ft_strjoin("Hello", "");
    assert(result != NULL);
    assert(strcmp(result, "Hello") == 0);
    free(result);

    // Test 4: Concatenating two empty strings
    result = ft_strjoin("", "");
    assert(result != NULL);
    assert(strcmp(result, "") == 0);
    free(result);

    // Test 5: Concatenating `NULL` with a normal string (should return NULL)
    result = ft_strjoin(NULL, "Hello");
    assert(result == NULL);

    // Test 6: Concatenating a normal string with `NULL` (should return NULL)
    result = ft_strjoin("Hello", NULL);
    assert(result == NULL);

    // Test 7: Concatenating two `NULL` values (should return NULL)
    result = ft_strjoin(NULL, NULL);
    assert(result == NULL);

    // Test 8: Concatenating long strings
    char *long_str1 = "This is a long ";
    char *long_str2 = "string test case.";
    result = ft_strjoin(long_str1, long_str2);
    assert(result != NULL);
    assert(strcmp(result, "This is a long string test case.") == 0);
    free(result);

    printf("All tests passed!\n");
}

int main() {
    test_ft_strjoin();
    return 0;
}

