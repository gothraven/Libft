/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:53:41 by szaghban          #+#    #+#             */
/*   Updated: 2017/11/09 19:05:54 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		tmp[len];
	char		*s;
	char		*d;
	size_t		i;

	s = (char *)src;
	d = (char *)dst;
	i = -1;
	while (++i < len)
		tmp[i] = s[i];
	i = -1;
	while (++i < len)
		d[i] = tmp[i];
	return (dst);
}
