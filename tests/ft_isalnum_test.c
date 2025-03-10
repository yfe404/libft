#include <stdio.h>
#include <assert.h>

int	ft_isalnum(int c);

int main() {
	int	i;

	i = -420;
	while(i < '0')
    	assert(ft_isalnum(i++) == 0);
	while(i <= '9')
	{
    	assert(ft_isalnum(i) == i);
		i++;
	}
	while(i < 'A')
    	assert(ft_isalnum(i++) == 0);
	while(i <= 'Z')
	{
    	assert(ft_isalnum(i) == i);
		i++;
	}
	while(i < 'a')
    	assert(ft_isalnum(i++) == 0);
	while(i <= 'z')
	{
    	assert(ft_isalnum(i) == i);
		i++;
	}
	while(i < 420)
    	assert(ft_isalnum(i++) == 0);

    printf("All tests passed!\n");
    return 0;
}

