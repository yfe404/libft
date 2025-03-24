#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strnew(size_t size);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	count;

	count = 0;
	new_s = ft_strnew(ft_strlen(s) + 1);
	if (s == NULL || f == NULL)
		return (NULL);
	while (new_s && s[count])
	{
		new_s[count] = f(count, s[count]);
		count++;
	}
	return (new_s);
}
