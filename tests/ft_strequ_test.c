#include <stdio.h>
#include <assert.h>
#include <string.h>

int	ft_strequ(char const *s1, char const *s2);

int main() {

    assert(ft_strequ("ABC", "ABC") == 1);
    assert(ft_strequ("ABC", "AB") == 0);
    assert(ft_strequ("ABA", "ABZ") == 0);
    assert(ft_strequ("ABJ", "ABC") == 0);
    assert(ft_strequ("", "A") == 0);
    assert(ft_strequ("", "") == 1);

    printf("All tests passed!\n");
    return 0;
}

