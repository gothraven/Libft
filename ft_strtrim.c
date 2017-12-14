/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 01:43:33 by szaghban          #+#    #+#             */
/*   Updated: 2017/12/14 03:12:26 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen(s) + 1)))
		return (NULL);
	i = -1;
	j = -1;
	while (s[++i])
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			tmp[++j] = s[i];
	return (tmp);
}
