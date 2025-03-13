#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int main() {
    char src[] = "Hello friend!"; 
    char src2[] = "Hello friend!"; 
    char src3[] = "Hello friend!"; 
	char dest[100];

	ft_memmove(src + 2, src + 1, 5);
	memmove(src2 + 2, src2 + 1, 5);
	assert(strcmp(src, src2) == 0);
	ft_memmove(src + 0, src + 3, 6); 
	memmove(src2 + 0, src2 + 3, 6);
	assert(strcmp(src, src2) == 0);
	memmove(dest, src3, strlen(src3) + 1);
	assert(strcmp(dest, src3) == 0);

    printf("All tests passed!\n");
    return 0;
}

