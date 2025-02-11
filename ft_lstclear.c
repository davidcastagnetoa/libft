/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 03:23:15 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:23:42 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_list;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp_list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_list;
	}
}
