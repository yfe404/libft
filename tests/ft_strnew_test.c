#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

char	*ft_strnew(size_t size);

int main() {
    char *buffer = ft_strnew(14);

	assert(buffer != NULL);
	for (int i = 0; i < 14; ++ i)
		assert(*(buffer+i) == 0);

	free(buffer);

    printf("All tests passed!\n");
    return 0;
}

