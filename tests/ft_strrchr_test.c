#include <stdio.h>
#include <string.h>
#include <assert.h>

// Function prototype
char *ft_strrchr(const char *s, int c);

// Test function for ft_strrchr
void test_ft_strrchr() {
    const char *str = "Hello, World!";

    // Test 1: Character appears multiple times (should return the last occurrence)
    assert(ft_strrchr(str, 'o') == strrchr(str, 'o'));

    // Test 2: First character
    assert(ft_strrchr(str, 'H') == strrchr(str, 'H'));

    // Test 3: Last character in the string
    assert(ft_strrchr(str, '!') == strrchr(str, '!'));

    // Test 4: Character does not exist
    assert(ft_strrchr(str, 'z') == strrchr(str, 'z'));

    // Test 5: Searching for '\0' (should return a pointer to the null terminator)
    assert(ft_strrchr(str, '\0') == strrchr(str, '\0'));

    // Test 6: Empty string
    assert(ft_strrchr("", 'a') == strrchr("", 'a'));

    // Test 7: Last occurrence of a repeated character
    assert(ft_strrchr("banana", 'a') == strrchr("banana", 'a'));

    // Test 8: NULL input case (undefined behavior, so we don’t test it)
    // assert(ft_strrchr(NULL, 'a') == strrchr(NULL, 'a'));

    printf("All tests passed!\n");
}

int main() {
    test_ft_strrchr();
    return 0;
}

