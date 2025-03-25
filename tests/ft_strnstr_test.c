#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <assert.h>

// Function prototype
char *ft_strnstr(const char *haystack, const char *needle, size_t len);

// Test function for ft_strnstr
void test_ft_strnstr() {
    const char *str = "Hello, World!";
    char *expected;
    char *actual;

    // Test 1: Normal substring in the middle (length sufficient)
    expected = strnstr(str, "World", 12);
    actual = ft_strnstr(str, "World", 12);
    assert(actual == expected);

    // Test 2: Substring at the beginning
    expected = strnstr(str, "Hello", 5);
    actual = ft_strnstr(str, "Hello", 5);
    assert(actual == expected);

    // Test 3: Substring at the end (length sufficient)
    expected = strnstr(str, "!", 13);
    actual = ft_strnstr(str, "!", 13);
    assert(actual == expected);

    // Test 4: Full string match (length sufficient)
    expected = strnstr(str, "Hello, World!", 13);
    actual = ft_strnstr(str, "Hello, World!", 13);
    assert(actual == expected);

    // Test 5: Empty needle (should return haystack)
    expected = strnstr(str, "", 10);
    actual = ft_strnstr(str, "", 10);
    assert(actual == expected);

    // Test 6: Needle not in haystack (should return NULL)
    expected = strnstr(str, "banana", 13);
    actual = ft_strnstr(str, "banana", 13);
    assert((actual == NULL) == (expected == NULL));

    // Test 7: Needle is a single character that exists
    expected = strnstr(str, "W", 10);
    actual = ft_strnstr(str, "W", 10);
    assert(actual == expected);

    // Test 8: Needle is a single character that does not exist
    expected = strnstr(str, "z", 13);
    actual = ft_strnstr(str, "z", 13);
    assert((actual == NULL) == (expected == NULL));

    // Test 9: Haystack is an empty string
    expected = strnstr("", "Hello", 5);
    actual = ft_strnstr("", "Hello", 5);
    assert((actual == NULL) == (expected == NULL));

    // Test 10: Needle is longer than haystack
    expected = strnstr("Short", "This is longer", 20);
    actual = ft_strnstr("Short", "This is longer", 20);
    assert((actual == NULL) == (expected == NULL));

    // Test 11: Needle appears multiple times (should return first occurrence)
    expected = strnstr("abababab", "aba", 8);
    actual = ft_strnstr("abababab", "aba", 8);
    assert(actual == expected);

    // Test 12: Searching for '\0' (should return pointer to '\0')
    expected = strnstr(str, "\0", 13);
    actual = ft_strnstr(str, "\0", 13);
    assert(actual == expected);

    // Test 13: Searching in a string of repeated characters
    expected = strnstr("aaaaaaa", "aaa", 7);
    actual = ft_strnstr("aaaaaaa", "aaa", 7);
    assert(actual == expected);

    // Test 14: Needle is partially present but cut off by max length
    expected = strnstr("HelloWorld", "World", 7);
    actual = ft_strnstr("HelloWorld", "World", 7);
    assert((actual == NULL) == (expected == NULL));

    // Test 15: Length is 0 (should return NULL)
    expected = strnstr(str, "Hello", 0);
    actual = ft_strnstr(str, "Hello", 0);
    assert((actual == NULL) == (expected == NULL));

    // Test 16: Length too short for complete match
    expected = strnstr(str, "World", 3);
    actual = ft_strnstr(str, "World", 3);
    assert((actual == NULL) == (expected == NULL));

    // Test 17: Searching within an exact length boundary
    expected = strnstr(str, "Hello", 5);
    actual = ft_strnstr(str, "Hello", 5);
    assert(actual == expected);

    printf("All tests passed!\n");
}

int main() {
    test_ft_strnstr();
    return 0;
}
