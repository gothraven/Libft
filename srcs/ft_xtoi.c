/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 15:49:28 by szaghban          #+#    #+#             */
/*   Updated: 2018/10/13 20:53:25 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_xtoi(char *s)
{
	int	i;
	int	ans;
	int	multiplier;

	i = ft_strlen(s) - 1;
	ans = 0;
	multiplier = 1;
	while (i >= 0)
	{
		if (s[i] >= 'A' && s[i] <= 'F')
			ans += multiplier * (s[i] - ('A' - 10));
		else if (s[i] >= 'a' && s[i] <= 'f')
			ans += multiplier * (s[i] - ('a' - 10));
		else if (s[i] >= '0' && s[i] <= '9')
			ans += multiplier * (s[i] - '0');
		multiplier *= 16;
		i--;
	}
	return (ans);
}
