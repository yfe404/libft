#include <stdio.h>
#include <string.h>
#include <assert.h>

void	ft_bzero(void *s, size_t n);

int main() {
    char buffer[] = "Hello friend!"; 
	assert(strlen(buffer) == 13);
	ft_bzero(buffer+5, 1);
	assert(strlen(buffer) == 5);
	ft_bzero(buffer+3, 1);
	assert(strlen(buffer) == 3);
	assert(buffer[4] == 'o');
	ft_bzero(buffer+3, 3);
	assert(buffer[4] == '\0');

    printf("All tests passed!\n");
    return 0;
}

