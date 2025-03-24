#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *ft_strmap(char const *s, char (*f)(char));

char to_uppercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

char replace_with_X(char c) {
    return 'X';
}

char increment_char(char c) {
    return c + 1;
}

void test_ft_strmap() {
    char *result;

    // Test 1: Convert lowercase to uppercase
    result = ft_strmap("hello", to_uppercase);
    assert(result != NULL);
    assert(strcmp(result, "HELLO") == 0);
    free(result);

    // Test 2: Replace all characters with 'X'
    result = ft_strmap("abcdef", replace_with_X);
    assert(result != NULL);
    assert(strcmp(result, "XXXXXX") == 0);
    free(result);

    // Test 3: Increment each character
    result = ft_strmap("abc", increment_char);
    assert(result != NULL);
    assert(strcmp(result, "bcd") == 0);
    free(result);

    // Test 4: Empty string should return an empty string
    result = ft_strmap("", to_uppercase);
    assert(result != NULL);
    assert(strcmp(result, "") == 0);
    free(result);

    // Test 5: NULL string should return NULL
    result = ft_strmap(NULL, to_uppercase);
    assert(result == NULL);

    // Test 6: NULL function pointer should return NULL
    result = ft_strmap("hello", NULL);
    assert(result == NULL);

    printf("All tests passed!\n");
}

int main() {
    test_ft_strmap();
    return 0;
}

