#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void	ft_strdel(char **ap);
char	*ft_strnew(size_t size);


int main() {
    char	*buffer = ft_strnew(14);

	assert(buffer != NULL);
	ft_strdel(&buffer);
	assert(buffer == NULL);

    printf("All tests passed!\n");
    return 0;
}

