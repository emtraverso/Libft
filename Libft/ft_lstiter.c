/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etravers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:35:04 by etravers          #+#    #+#             */
/*   Updated: 2022/10/09 18:43:46 by etravers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst != NULL)
	{
		tmp = lst;
		while (tmp)
		{
			(*f)(tmp->content);
			tmp = tmp->next;
			if (tmp == NULL)
				return ;
		}
	}
}
