/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etravers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:19:36 by etravers          #+#    #+#             */
/*   Updated: 2022/10/08 14:59:15 by etravers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		b;
	int		c;

	c = 0;
	while (s1[c])
		c++;
	a = malloc(sizeof(char) * (c + 1));
	if (a == NULL)
		return (NULL);
	b = 0;
	while (s1[b])
	{
		a[b] = s1[b];
		b++;
	}
	a[b] = '\0';
	return (a);
}
