#include "libft.h"

// Count # of nodes
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main()
// {
// 	t_list *list = ft_lstnew("a");;
// 	t_list *ptr;

// 	char *alphabet = "abcdefghijk";
// 	ptr = list;
// 	while (*alphabet)
// 	{
// 		ptr->next = ft_lstnew(alphabet);
// 		alphabet++;
// 		ptr = ptr->next;
// 	}

// 	int size = ft_lstsize(list);
// 	printf("Size of list: %i\n", size);

// 	return (0);
// }