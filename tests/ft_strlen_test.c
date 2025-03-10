#include <stdio.h>
#include <assert.h>
#include <strings.h>

size_t	ft_strlen(const char *s);

int main() {
    assert(ft_strlen("0") == 1);
    assert(ft_strlen("\0") == 0);
    assert(ft_strlen(NULL) == 0);
    assert(ft_strlen("9999") == 4);
    assert(ft_strlen("\n\n") == 2);

    printf("All tests passed!\n");
    return 0;
}

