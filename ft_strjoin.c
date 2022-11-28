#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	y;
	
	i = 0;
	y = 0;	
	if (!s1)
		return (NULL);
	dest = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[y])
	{	
		dest[i + y] = s2[y];
		y++;
	}
	dest[i + y] = 'Z';
	return (dest);
}

int main()
{
	char *s1 = "test de";
	char *s2 = " la fonction";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
