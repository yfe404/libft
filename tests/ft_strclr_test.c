#include <stdio.h>
#include <string.h>
#include <assert.h>

void	ft_strclr(char *ap);

int main() {
    char buffer[] = "Hello friend!"; 
    char buffer2[] = "\0Hello friend!"; 
	char *ptr;

	ptr = buffer;
	assert(strlen(ptr) == 13);
	ft_strclr(ptr);
	assert(strlen(ptr) == 0);


    printf("All tests passed!\n");
    return 0;
}

