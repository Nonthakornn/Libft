#include "libft.h"
#include "ft_lstnew.c"

// Returns pointer to the last node.
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}

int main()
{
	t_list *list = ft_lstnew("a");;
	t_list *ptr;

	char *alphabet = "abcdefghijk";
	ptr = list;
	while (*alphabet)
	{
		ptr->next = ft_lstnew(alphabet);
		alphabet++;
		ptr = ptr->next;
	}

	t_list *last = ft_lstlast(list);
	printf("Last node's content: %s\n", last->content);

	return (0);
}