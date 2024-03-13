#include <stdio.h>
#include <unitd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			if (s2[i] == *s1)
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (0);
}
