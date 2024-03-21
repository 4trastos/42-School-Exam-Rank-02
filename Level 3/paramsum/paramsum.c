#include <unistd.h>

void	ft_princhar(int numb)
{
	char *number = "0123456789";
	if (numb > 9)
		ft_princhar(numb / 10);
	write(1, &number[numb % 10], 1);
}

int main(int argc, char **argv)
{
	(void)argv;

	ft_princhar(argc -1);
	write(1, "\n", 1);
	return (0);
}
