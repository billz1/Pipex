/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:09:43 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:47:58 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*actual_node;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	actual_node = *lst;
	while (actual_node != NULL)
	{
		temp = actual_node->next;
		ft_lstdelone(actual_node, del);
		actual_node = temp;
	}
	*lst = NULL;
}
