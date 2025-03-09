#include <stdio.h>
#include <assert.h>

int	ft_isdigit(int c);

int main() {
	int	i;

	i = -420;
	while(i < '0')
    	assert(ft_isdigit(i++) == 0);
	while(i <= '9')
	{
    	assert(ft_isdigit(i) == i);
		i++;
	}
	while(i < 420)
    	assert(ft_isdigit(i++) == 0);

    printf("All tests passed!\n");
    return 0;
}

