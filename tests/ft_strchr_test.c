#include <stdio.h>
#include <string.h>
#include <assert.h>

// Function prototype
char *ft_strchr(const char *s, int c);

// Test function for ft_strchr
void test_ft_strchr() {
    const char *str = "Hello, World!";

    // Test 1: Character exists in the middle
    assert(ft_strchr(str, 'o') == strchr(str, 'o'));
    
    // Test 2: First occurrence of a character
    assert(ft_strchr(str, 'H') == strchr(str, 'H'));
    
    // Test 3: Character at the end
    assert(ft_strchr(str, '!') == strchr(str, '!'));
    
    // Test 4: Character does not exist
    assert(ft_strchr(str, 'z') == strchr(str, 'z'));
    
    // Test 5: Searching for '\0' (should return a pointer to the null terminator)
    assert(ft_strchr(str, '\0') == strchr(str, '\0'));
    
    // Test 6: Empty string
    assert(ft_strchr("", 'a') == strchr("", 'a'));

    // Test 7: NULL input (should not be tested directly, as it leads to undefined behavior)
    // assert(ft_strchr(NULL, 'a') == strchr(NULL, 'a')); // Undefined behavior

    printf("All tests passed!\n");
}

int main() {
    test_ft_strchr();
    return 0;
}

