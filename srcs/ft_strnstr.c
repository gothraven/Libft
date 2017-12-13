/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 21:34:57 by szaghban          #+#    #+#             */
/*   Updated: 2017/12/13 22:45:35 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	len++;
	while (haystack[i] && needle[j] && --len)
	{
		if (needle[j] == haystack[i])
			j++;
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	if (!needle[j])
		return (&((char *)haystack)[i - j]);
	else
		return (0);
}
