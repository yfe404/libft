#include <stdlib.h>
#include <errno.h>

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new;

	len = ft_strlen(s);
	new = malloc(len + 1);
	if (new == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memcpy(new, s, len + 1);
	return (new);
}
