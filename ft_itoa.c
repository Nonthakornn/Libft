#include "libft.h"
#include <stdlib.h>

static int length(int n);

char *ft_itoa(int n)
{
	char *str;
	int len;
	int sign;

	len = length(n);
	sign = 1;
	str = (char *) malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	str[len] = '\0';
	while (len-- > 0)
	{
		if (len == 0 && sign == -1)
			str[len] = '-';
		else
		{
			str[len] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}

static 

static int length(int n)
{
	int len;

	len = 0;
	if (n == 0)
		return 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int main() {
	int n = -123;
	char *str = ft_itoa(n);
	if (str != NULL)
		printf("%s\n", str);  // Output: -123
	free(str);
	return 0;
}