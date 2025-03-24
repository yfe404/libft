#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Function prototype
char *ft_strsub(char const *s, unsigned int start, size_t len);

// Test cases
void test_ft_strsub() {
    char *result;

    // Test 1: Extract substring from middle
    result = ft_strsub("Hello, world!", 7, 5); // "world"
    assert(result != NULL);
    assert(strcmp(result, "world") == 0);
    free(result);

    // Test 2: Extract substring from start
    result = ft_strsub("abcdef", 0, 3); // "abc"
    assert(result != NULL);
    assert(strcmp(result, "abc") == 0);
    free(result);

    // Test 3: Extract full string
    result = ft_strsub("Test", 0, 4); // "Test"
    assert(result != NULL);
    assert(strcmp(result, "Test") == 0);
    free(result);

    // Test 4: Extract substring from end
    result = ft_strsub("abcdef", 3, 3); // "def"
    assert(result != NULL);
    assert(strcmp(result, "def") == 0);
    free(result);

    // Test 5: Extract empty substring
    result = ft_strsub("Hello", 2, 0); // ""
    assert(result != NULL);
    assert(strcmp(result, "") == 0);
    free(result);

    // Test 6: Handle empty string input
    result = ft_strsub("", 0, 0); // ""
    assert(result != NULL);
    assert(strcmp(result, "") == 0);
    free(result);

    // Test 7: NULL input should return NULL
    result = ft_strsub(NULL, 0, 3);
    assert(result == NULL);

    // Test 8: `start` beyond string length (undefined behavior, should be handled gracefully)
    result = ft_strsub("short", 10, 3);
    assert(result == NULL);

    // Test 9: `len` exceeding available characters (should return only available part)
    result = ft_strsub("hello", 3, 10); // "lo"
    assert(result != NULL);
    assert(strcmp(result, "lo") == 0);
    free(result);

    printf("All tests passed!\n");
}

int main() {
    test_ft_strsub();
    return 0;
}

