#include <stdio.h>
#include <assert.h>
#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n);

int main() {

    assert(ft_strnequ("abc", "abc", 3) == 1); 
    assert(ft_strnequ("abc", "abd", 3) == 0); 
    assert(ft_strnequ("abc", "abd", 2) == 1);
    assert(ft_strnequ("abc", "a", 5) == 0);
    assert(ft_strnequ("", "a", 1) == 0);
    assert(ft_strnequ("", "a", 0) == 1);

    printf("All tests passed!\n");
    return 0;
}

