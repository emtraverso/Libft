/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etravers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:49:35 by etravers          #+#    #+#             */
/*   Updated: 2022/10/11 10:22:05 by etravers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			p = s;
		s++;
	}
	if ((char)c == '\0')
		p = s;
	return ((char *)p);
}
