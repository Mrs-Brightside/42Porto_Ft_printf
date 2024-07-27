/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:03:18 by tda-cost          #+#    #+#             */
/*   Updated: 2024/05/04 13:05:46 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*handle_failure(t_list *new_lst, void (*del)(void *))
{
	t_list	*prev;

	while (new_lst != NULL)
	{
		prev = new_lst;
		new_lst = new_lst->next;
		del(prev->content);
		free(prev);
	}
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;
	t_list	*prev;

	new_lst = NULL;
	prev = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		new_node = (t_list *) malloc (sizeof(t_list));
		if (!new_node)
			return (handle_failure(new_lst, del));
		new_node->content = f(lst->content);
		new_node->next = NULL;
		if (prev == NULL)
			new_lst = new_node;
		else
			prev->next = new_node;
		prev = new_node;
		lst = lst->next;
	}
	return (new_lst);
}
