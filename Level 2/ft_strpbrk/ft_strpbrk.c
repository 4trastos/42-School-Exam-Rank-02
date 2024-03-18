#include <stdio.h>
#include <unitd.h>
#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;

	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
