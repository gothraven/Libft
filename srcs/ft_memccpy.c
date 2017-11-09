/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:11:23 by szaghban          #+#    #+#             */
/*   Updated: 2017/11/09 19:35:33 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d = dst;
	const unsigned char *s = src;
	if (n) {
		d = (unsigned char *)dst;
		s = (const unsigned char *)src;
		do {
			if ((*d++ = *s++) == c)
				return (dst);
		} while (--n != 0);
	}
	return (0);
}
