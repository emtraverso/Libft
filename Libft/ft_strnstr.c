/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etravers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:41:12 by etravers          #+#    #+#             */
/*   Updated: 2022/10/08 12:47:38 by etravers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[a] != '\0')
	{
		b = 0;
		while ((big[a + b]) == little[b] && (a + b) < len)
		{
			if (big[a + b] == '\0' && little[b] == '\0')
				return ((char *)&big[a]);
			b++;
		}
		if (little[b] == '\0')
			return ((char *)big + a);
		a++;
	}
	return (0);
}
