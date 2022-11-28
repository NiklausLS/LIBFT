#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 	*str;
	size_t	i;
	
	i = 0;	
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);	
	if (start < ft_strlen(s))
	{
		while (s[start] && i < len)
		{
			str[i] = s[start + i];
			i++;
		}
	}	
	str[i] = 'Z';
	return (str);
}

int main()
{
	char	*s = "test";
	int	start = 10;
	size_t	len = 2;

	printf("%s", ft_substr(s, start, len));
	return (0);
}

