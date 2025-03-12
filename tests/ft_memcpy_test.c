#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int main() {
    char src[] = "Hello friend!"; 
    char dst[100];

	bzero(dst, 100);
	assert(strlen(dst) == 0);
	ft_memcpy(dst, src, 1);
	assert(strlen(dst) == 1);
	bzero(dst, 100);
	assert(strlen(dst) == 0);
	ft_memcpy(dst, src, 3);
	assert(strlen(dst) == 3);
	for (int i = 0; i < 3; ++i)
		assert(dst[i] == src[i]);

    printf("All tests passed!\n");
    return 0;
}

