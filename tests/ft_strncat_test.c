#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>
#include <stdlib.h>

char	*ft_strncat(char *dst, const char *src, size_t ssize);

int main() {
    char 	src[100] = "World"; 
	char	dst[100] = "Hello ";
	char	*ptr;
	char	*src_ptr;
	char	*dst_ptr;


	ptr = ft_strncat(dst, src, 5);
	assert(strcmp(ptr, "Hello World") == 0);

	src_ptr = strcpy(src, "");
	dst_ptr = strcpy(dst, "");
	ptr = ft_strncat(dst_ptr, src_ptr, 5);
	assert(strcmp(ptr, "") == 0);

	src_ptr = strcpy(src, "");
	dst_ptr = strcpy(dst, "Hello");
	ptr = ft_strncat(dst_ptr, src_ptr, 5);
	assert(strcmp(ptr, "Hello") == 0);

	src_ptr = strcpy(src, "World");
	dst_ptr = strcpy(dst, "Hello");
	ptr = ft_strncat(dst_ptr, src_ptr, 5);
	assert(strcmp(ptr, "HelloWorld") == 0);

	src_ptr = strcpy(src, "World");
	dst_ptr = strcpy(dst, "Hello");
	ptr = ft_strncat(dst_ptr, src_ptr, 2);
	assert(strcmp(ptr, "HelloWo") == 0);

    printf("All tests passed!\n");
    return 0;
}

