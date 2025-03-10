#include <stdio.h>
#include <assert.h>

int	ft_isprint(int c);

int main() {
	int	i;

	i = -420;
	while(i < 32)
    	assert(ft_isprint(i++) == 0);
	while(i <= 126)
	{
    	assert(ft_isprint(i) == i);
		i++;
	}
	while(i < 420)
    	assert(ft_isprint(i++) == 0);

    printf("All tests passed!\n");
    return 0;
}

