#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char to_uppercase(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z' && ((index % 2) == 0)) {
        return c - 32;
    }
    return c;
}

char replace_with_X(unsigned int index, char c) {
	if (index == 0)
		return c;
    return 'X';
}

char increment_char(unsigned int index, char c) {
	if (index == 1)
		return c;
    return c + 1;
}

void test_ft_strmapi() {
    char *result;

    // Test 1: Convert lowercase to uppercase every 2 char
    result = ft_strmapi("hello", to_uppercase);
    assert(result != NULL);
    assert(strcmp(result, "HeLlO") == 0);
    free(result);

    // Test 2: Replace all characters with 'X' except index == 0
    result = ft_strmapi("abcdef", replace_with_X);
    assert(result != NULL);
    assert(strcmp(result, "aXXXXX") == 0);
    free(result);

    // Test 3: Increment each character except index == 1
    result = ft_strmapi("abc", increment_char);
    assert(result != NULL);
    assert(strcmp(result, "bbd") == 0);
    free(result);

    // Test 4: Empty string should return an empty string
    result = ft_strmapi("", to_uppercase);
    assert(result != NULL);
    assert(strcmp(result, "") == 0);
    free(result);

    // Test 5: NULL string should return NULL
    result = ft_strmapi(NULL, to_uppercase);
    assert(result == NULL);

    // Test 6: NULL function pointer should return NULL
    result = ft_strmapi("hello", NULL);
    assert(result == NULL);

    printf("All tests passed!\n");
}

int main() {
    test_ft_strmapi();
    return 0;
}

