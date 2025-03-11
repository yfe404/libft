#include <stdio.h>
#include <assert.h>

int	ft_toupper(int c);

int main() {
	int	i;

	i = -420;
	while(i < 'a')
	{
    	assert(ft_toupper(i) == i);
		i++;
	}
	while(i <= 'z')
	{
    	assert(ft_toupper(i) == i - 32);
		i++;
	}
	while(i < 420)
	{
    	assert(ft_toupper(i) == i);
		i++;
	}

    printf("All tests passed!\n");
    return 0;
}

