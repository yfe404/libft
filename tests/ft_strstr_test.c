#include <stdio.h>
#include <string.h>
#include <assert.h>

// Function prototype
char *ft_strstr(const char *haystack, const char *needle);

// Test function for ft_strstr
void test_ft_strstr() {
    const char *str = "Hello, World!";

    // Test 1: Normal substring in the middle
    assert(ft_strstr(str, "World") == strstr(str, "World"));

    // Test 2: Substring at the beginning
    assert(ft_strstr(str, "Hello") == strstr(str, "Hello"));

    // Test 3: Substring at the end
    assert(ft_strstr(str, "!") == strstr(str, "!"));

    // Test 4: Full string match
    assert(ft_strstr(str, "Hello, World!") == strstr(str, "Hello, World!"));

    // Test 5: Empty needle (should return haystack)
    assert(ft_strstr(str, "") == strstr(str, ""));

    // Test 6: Needle not in haystack
    assert(ft_strstr(str, "banana") == strstr(str, "banana"));

    // Test 7: Needle is a single character that exists
    assert(ft_strstr(str, "W") == strstr(str, "W"));

    // Test 8: Needle is a single character that does not exist
    assert(ft_strstr(str, "z") == strstr(str, "z"));

    // Test 9: Haystack is an empty string
    assert(ft_strstr("", "Hello") == strstr("", "Hello"));

    // Test 10: Needle is longer than haystack
    assert(ft_strstr("Short", "This is longer") == strstr("Short", "This is longer"));

    // Test 11: Needle appears multiple times (should return first occurrence)
    assert(ft_strstr("abababab", "aba") == strstr("abababab", "aba"));

    // Test 12: Searching for '\0' (should return pointer to '\0')
    assert(ft_strstr(str, "\0") == strstr(str, "\0"));

    // Test 13: Searching in a string of repeated characters
    assert(ft_strstr("aaaaaaa", "aaa") == strstr("aaaaaaa", "aaa"));

    printf("All tests passed!\n");
}

int main() {
    test_ft_strstr();
    return 0;
}

