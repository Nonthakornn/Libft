#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nitems, size_t size)
{
    unsigned char *array;
    size_t i;

    i = 0;
    array = malloc(nitems*size);

    while (i < nitems*size)
    {
        array[i] = 0;
        i++;
    }
    return (array);
}
// int main(void)
// {
//  printf("\nTest (simple compilation/free) de ft_calloc;\n");
// 	char *ptr;
// 	ptr = ft_calloc(5, sizeof(int));
// 	free(ptr);
// }