#include <stdio.h>
#include <assert.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2);

int main() {

    assert(ft_strcmp("ABC", "ABC") == 0);
    assert(ft_strcmp("ABC", "AB") == 67);
    assert(ft_strcmp("ABA", "ABZ") == -25);
    assert(ft_strcmp("ABJ", "ABC") == 7);
    assert(ft_strcmp("", "A") == -65);
    assert(ft_strcmp("", "") == 0);

    printf("All tests passed!\n");
    return 0;
}

