#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

char	*strcpy(char *dst, const char *src);

int main() {
    char 	src[] = "Hello friend!"; 
	char	dst[100];
	char	*ptr;
	
	ptr = strcpy(dst, src);
	assert(strcmp(src, ptr) == 0);

	src[0] = '\0';
	ptr = strcpy(dst, src);
	assert(strcmp(src, ptr) == 0);

    printf("All tests passed!\n");
    return 0;
}

