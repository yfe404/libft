#include <stdio.h>
#include <assert.h>

int	ft_isascii(int c);

int main() {
	int	i;

	i = -420;
	while(i < 0)
    	assert(ft_isascii(i++) == 0);
	while(i <= 127)
	{
    	assert(ft_isascii(i) == i);
		i++;
	}
	while(i < 420)
    	assert(ft_isascii(i++) == 0);

    printf("All tests passed!\n");
    return 0;
}

