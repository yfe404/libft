#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <assert.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int has_same_sign(int a, int b)
{
	if (a < 0)
		return (b < 0);
	if (a > 0)
		return (b > 0);
	return (0);
}

int main() {
    char src[] = "Hello friend!"; 
    char dst[] = "Hello World";

	for (int j = 0; j < 7; ++j)
		assert(!ft_memcmp(src, dst, j));
	for (int i = 7; i < 11; ++i )
	{
		assert(has_same_sign(
			memcmp(src, dst, i),
			ft_memcmp(src, dst, i)
		));
	}

    printf("All tests passed!\n");
    return 0;
}


