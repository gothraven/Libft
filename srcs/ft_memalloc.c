/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <szaghban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 23:24:55 by szaghban          #+#    #+#             */
/*   Updated: 2019/01/31 16:23:29 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = -1;
	if (!(tmp = (unsigned char*)malloc(size * sizeof(unsigned char))))
		ft_bzero(tmp, size);
	else
		while (++i < size)
			tmp[i] = 0;
	return (tmp);
}
