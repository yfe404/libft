#include <stdio.h>
#include <string.h>
#include <assert.h>

void	ft_bzero(void *s, size_t n);

int main() {
    char buffer[] = "Hello friend!"; 
    char buffer2[] = "\0Hello friend!"; 

	assert(strlen(buffer) == 13);
	ft_bzero(buffer+5, 1);
	assert(strlen(buffer) == 5);
	ft_bzero(buffer+3, 1);
	assert(strlen(buffer) == 3);
	assert(buffer[4] == 'o');
	ft_bzero(buffer+3, 3);
	assert(buffer[4] == '\0');

	ft_bzero(buffer2, 5);
	assert(buffer2[1] == '\0');
	assert(buffer2[2] == '\0');
	assert(buffer2[3] == '\0');
	assert(buffer2[4] == '\0');

    printf("All tests passed!\n");
    return 0;
}

