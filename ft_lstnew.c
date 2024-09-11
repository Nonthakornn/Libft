#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main(void)
// {
// 	t_list	*newlist = ft_lstnew("a");

// 	newlist->next = ft_lstnew("b");
// 	newlist->next->next = ft_lstnew("c");

// 	t_list	*current = newlist;
// 	while (current != NULL)
// 	{
// 		printf("%s\n", (char *) current->content);
// 		current = current->next;
// 	}
// 	return (0);
// }
