#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>

void	*memchr(const void *s, int c, size_t n);

int main() {
    char str[] = "Hello friend!"; 
	char	*nullptr = NULL;

	assert(memchr(nullptr, 'f', 10) == NULL);
	assert(strcmp(memchr(str, 'f', 10), "friend!") == 0);
	assert(memchr(str, 'f', 5) == NULL);
	assert(strcmp(memchr(str, 'H', 10), "Hello friend!") == 0);
	assert(strcmp(memchr(str, 'e', 1), "ello friend!") == 0);
	assert(memchr(str, 'e', 0) == NULL);

    printf("All tests passed!\n");
    return 0;
}

