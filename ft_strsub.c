/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 00:39:09 by szaghban          #+#    #+#             */
/*   Updated: 2017/12/14 01:41:47 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*tmp;
	size_t		i;
	size_t		j;

	if (!s)
		return (NULL);
	if (!(tmp = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = (size_t)start - 1;
	j = 0;
	while (++i < len + start && s[i])
		tmp[j++] = s[i];
	tmp[j] = '\0';
	return (tmp);
}
