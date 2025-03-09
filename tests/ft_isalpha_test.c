#include <stdio.h>
#include <assert.h>
#include <limits.h>

int	ft_isalpha(int c);

int main() {
	int	i;

	i = INT_MIN;
	while(i < 'A')
    	assert(ft_isalpha(i++) == 0);
	while(i <= 'Z')
	{
    	assert(ft_isalpha(i) == i);
		i++;
	}
	while(i < 'a')
    	assert(ft_isalpha(i++) == 0);
	while(i <= 'z')
	{
    	assert(ft_isalpha(i) == i);
		i++;
	}
	while(i < INT_MAX)
    	assert(ft_isalpha(i++) == 0);

    printf("All tests passed!\n");
    return 0;
}

