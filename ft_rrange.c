#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*rrange;
	int	i;

	if (start > end)
		rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		rrange[i] = end;
		if (start > end)
			end += 1;
		else
			end -= 1;
		i++;
	}
	rrange[i] = end;
	return (rrange);
}
