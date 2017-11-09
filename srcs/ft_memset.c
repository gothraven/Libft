/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:35:05 by szaghban          #+#    #+#             */
/*   Updated: 2017/11/09 19:06:41 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*bb;

	if (c == 0)
		bzero(b, len);
	else
	{
		bb = (char *)b;
		while (len--)
			*bb++ = c;
	}
	return (b);
}
