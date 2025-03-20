#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void	*ft_memalloc(size_t);

int main() {
    void *buffer = ft_memalloc(14);

	assert(buffer != NULL);
	for (int i = 0; i < 14; ++ i)
		assert(*((char *)(buffer+i)) == 0);

	free(buffer);

    printf("All tests passed!\n");
    return 0;
}

