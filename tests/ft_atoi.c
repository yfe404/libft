#include <stdio.h>
#include <assert.h>

int	ft_atoi(const char *nptr);

int main() {
    assert(ft_atoi("0") == 0);
    assert(ft_atoi("-0") == 0);
    assert(ft_atoi("-42") == -42);
    assert(ft_atoi("42") == 42);
    assert(ft_atoi(NULL) == 0);

    printf("All tests passed!\n");
    return 0;
}

