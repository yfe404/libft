#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Function prototype
char *ft_strtrim(char const *s);

// Test cases
void test_ft_strtrim() {
    char *result;

    // Test 1: Trimming spaces from both sides
    result = ft_strtrim("   Hello, world!   ");
    assert(result != NULL);
    assert(strcmp(result, "Hello, world!") == 0);
    free(result);

    // Test 2: Trimming only leading spaces
    result = ft_strtrim("   Hello");
    assert(result != NULL);
    assert(strcmp(result, "Hello") == 0);
    free(result);

    // Test 3: Trimming only trailing spaces
    result = ft_strtrim("Hello   ");
    assert(result != NULL);
    assert(strcmp(result, "Hello") == 0);
    free(result);

    // Test 4: Trimming spaces, newlines, and tabs
    result = ft_strtrim("\t \n Hello, world! \n\t ");
    assert(result != NULL);
    assert(strcmp(result, "Hello, world!") == 0);
    free(result);

    // Test 5: String without leading or trailing spaces (should return a copy)
    result = ft_strtrim("NoTrimNeeded");
    assert(result != NULL);
    assert(strcmp(result, "NoTrimNeeded") == 0);
    free(result);

    // Test 6: Only spaces should return an empty string
    result = ft_strtrim("   \t \n   ");
    assert(result != NULL);
    assert(strcmp(result, "") == 0);
    free(result);

    // Test 7: Empty string should return an empty string
    result = ft_strtrim("");
    assert(result != NULL);
    assert(strcmp(result, "") == 0);
    free(result);

    // Test 8: NULL input should return NULL
    result = ft_strtrim(NULL);
    assert(result == NULL);

    printf("All tests passed!\n");
}

int main() {
    test_ft_strtrim();
    return 0;
}

