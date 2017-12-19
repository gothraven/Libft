/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 01:43:33 by szaghban          #+#    #+#             */
/*   Updated: 2017/12/18 22:22:49 by goth-rave        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char const	*tmp;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	tmp = s + ft_strlen(s) - 1;
	while (*tmp == ' ' || *tmp == '\t' || *tmp == '\n')
		tmp--;
	return (ft_strsub(s, 0, tmp - s + 1));
}
