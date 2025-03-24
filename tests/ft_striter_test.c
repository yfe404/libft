#include <stdio.h>
#include <assert.h>
#include <string.h>

// Function prototype
void ft_striter(char *s, void (*f)(char *));

// Test helper function to modify characters
void to_uppercase(char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c -= 32;
    }
}

// Test helper function to replace characters with 'X'
void replace_with_X(char *c) {
    *c = 'X';
}

// Test helper function to count function calls
void count_calls(char *c) {
    static int count = 0;
    (void)c;  // Avoid unused parameter warning
    count++;
    printf("Function called %d times\n", count);
}

// Test cases
void test_ft_striter() {
    // Test 1: Apply to_uppercase function
    char str1[] = "hello";
    ft_striter(str1, to_uppercase);
    assert(strcmp(str1, "HELLO") == 0);
    
    // Test 2: Apply replace_with_X function
    char str2[] = "abcde";
    ft_striter(str2, replace_with_X);
    assert(strcmp(str2, "XXXXX") == 0);

    // Test 3: Empty string should remain unchanged
    char str3[] = "";
    ft_striter(str3, to_uppercase);
    assert(strcmp(str3, "") == 0);

    // Test 4: NULL function pointer (should do nothing or be handled gracefully)
    char str4[] = "Test";
    ft_striter(str4, NULL);
    assert(strcmp(str4, "Test") == 0);

    // Test 5: NULL string pointer (should not crash)
    ft_striter(NULL, to_uppercase);

    printf("All tests passed!\n");
}

int main() {
    test_ft_striter();
    return 0;
}
