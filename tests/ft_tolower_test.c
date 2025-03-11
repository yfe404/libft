#include <stdio.h>
#include <assert.h>

int	ft_tolower(int c);

int main() {
	int	i;

	i = -420;
	while(i < 'A')
	{
    	assert(ft_tolower(i) == i);
		i++;
	}
	while(i <= 'Z')
	{
    	assert(ft_tolower(i) == i + 32);
		i++;
	}
	while(i < 420)
	{
    	assert(ft_tolower(i) == i);
		i++;
	}

    printf("All tests passed!\n");
    return 0;
}

