#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void	ft_memdel(void **ap);

int main() {
    void *buffer = malloc(14);

	assert(buffer != NULL);
	ft_memdel(&buffer);
	assert(buffer == NULL);

    printf("All tests passed!\n");
    return 0;
}

