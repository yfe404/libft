#include <stdio.h>
#include <string.h>
#include <assert.h>

void	ft_memset(void *s, int c, size_t n);

int main() {
    char buffer[] = "Hello friend!"; 
	assert(strlen(buffer) == 13);
	ft_memset(buffer+5, 0, 1);
	assert(strlen(buffer) == 5);
	ft_memset(buffer+3, 'X', 2);
	assert(strlen(buffer) == 5);
	assert(buffer[0] == 'H');
	assert(buffer[1] == 'e');
	assert(buffer[2] == 'l');
	assert(buffer[3] == 'X');
	assert(buffer[4] == 'X');

    printf("All tests passed!\n");
    return 0;
}

