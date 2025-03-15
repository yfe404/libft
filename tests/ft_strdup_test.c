#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

char	*ft_strdup(const char *s);

int main() {
    char 	src[] = "Hello friend!"; 
	char	*dst;
	
	dst = ft_strdup(src);
	assert(strcmp(src, dst) == 0);
	free(dst);

	src[0] = '\0';
	dst = ft_strdup(src);
	assert(strcmp(src, dst) == 0);

    printf("All tests passed!\n");
    return 0;
}

