#include "libc.h"

// 32-bit signed integer:
//     INT_MAX: 2,147,483,647 
//     INT_MIN: 2,147,483,648 

// 64-bit signed integer:
// 	INT_MAX: 9,223,372,036,854,775,807 
// 	INT_MIN: -9,223,372,036,854,775,808 


int ft_atoi(const char *str)
{
    int i;
    long sign;
    long long result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
}