#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

char	*ft_strncpy(char *dst, const char *src, size_t dsize);

int main() {
    char 	src[] = "Hello friend!"; 
	char	dst[100];
	char	*ptr;
	
	ptr = ft_strncpy(dst, src, 1);
	assert(strcmp("H", ptr) == 0);

	memset(dst, 1, 100);
	ptr = ft_strncpy(dst, src, 42);
	assert(strcmp(src, ptr) == 0);
	assert(*(ptr+42) == 1);
	assert(*(ptr+41) == 0);

	src[0] = '\0';
	memset(dst, 1, 100);
	ptr = ft_strncpy(dst, src, 10);
	assert(strcmp(src, ptr) == 0);

    printf("All tests passed!\n");
    return 0;
}

