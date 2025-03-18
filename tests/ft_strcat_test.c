#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>
#include <stdlib.h>

char	*ft_strcat(char *dst, const char *src);

int main() {
    char 	src[] = "friend!"; 
	char	dst[100] = "Hello ";
	char	*ptr;
	
	ptr = ft_strcat(dst, src);
	assert(strcmp(ptr, "Hello friend!") == 0);

	src[0] = '\0';
	ptr = ft_strcat(dst, src);
	assert(strcmp(ptr, "Hello friend!") == 0);

    printf("All tests passed!\n");
    return 0;
}

