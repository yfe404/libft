#include <stdio.h>
#include <assert.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main() {

	assert(ft_strncmp("abc", "abc", 3) == 0);  // 0 (equal)
    assert(ft_strncmp("abc", "abd", 3) == -1);  // -1 ('c' - 'd')
    assert(ft_strncmp("abc", "abd", 2) == 0);  // 0 (only checks 'ab')
    assert(ft_strncmp("abc", "a", 5) == 98);    // 'b' - '\0' (b)
    assert(ft_strncmp("", "a", 1) == -97);  // '\0' - 'a' (-a) 
    assert(ft_strncmp("", "a", 0) == 0); // compares 0 bytes so returns 0  

    printf("All tests passed!\n");
    return 0;
}

