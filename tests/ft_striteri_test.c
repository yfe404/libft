#include <stdio.h>
#include <assert.h>
#include <string.h>

void ft_striteri(char *s, void (*f)(unsigned int, char *));

void to_uppercase(unsigned int index, char *c) {
    if (*c >= 'a' && *c <= 'z' && ((index % 2) == 0)) {
        *c -= 32;
    }
}

void replace_with_X(unsigned int index, char *c) {
    if (index != 2)
    	*c = 'X';
}

void test_ft_striteri() {
    char str1[] = "hello";
    ft_striteri(str1, to_uppercase);
    assert(strcmp(str1, "HeLlO") == 0);
    
    char str2[] = "abcde";
    ft_striteri(str2, replace_with_X);
    assert(strcmp(str2, "XXcXX") == 0);

    char str3[] = "";
    ft_striteri(str3, to_uppercase);
    assert(strcmp(str3, "") == 0);

    char str4[] = "Test";
    ft_striteri(str4, NULL);
    assert(strcmp(str4, "Test") == 0);

    ft_striteri(NULL, to_uppercase);

    printf("All tests passed!\n");
}

int main() {
    test_ft_striteri();
    return 0;
}
