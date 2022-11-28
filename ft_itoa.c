#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int	ft_len(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		n = n * -1;
		size++;
	}
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	size;
	long	nb;		

	nb = n;
	size = ft_len(n);
	str = malloc(size);
	if (!str)
		return (NULL);
	if (nb < 0)
		nb = nb * -1;
	while (size--)
	{
		str[size] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int main()
{
	int n = 123;
	int neg = -123;

	printf("%s et ", ft_itoa(n));
	printf("%s ", ft_itoa(neg));
	return (0);
}
