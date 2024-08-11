#include "libft.h"

// 32-bit signed integer:
//     INT_MAX: 2,147,483,647 
//     INT_MIN: 2,147,483,648 

// 64-bit signed integer:
// 	INT_MAX: 9,223,372,036,854,775,807 
// 	INT_MIN: -9,223,372,036,854,775,808 


int ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	sign = 1;
	res = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != 0 && str[i] >= '0' && str[i] <= '9' )
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);

}

// int main()
// {
// 	int	result = ft_atoi("123abc");
// 	printf("The result is %d", result);
// 	return 0;
// }