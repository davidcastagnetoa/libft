/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastag <dacastag@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 03:21:08 by dacastag          #+#    #+#             */
/*   Updated: 2025/02/11 03:21:28 by dacastag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	lst_len;

	lst_len = ft_lstsize(lst);
	while (lst_len)
	{
		if (lst_len == 1)
			return (lst);
		lst = lst->next;
		lst_len--;
	}
	return (lst);
}
