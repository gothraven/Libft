/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 15:46:44 by szaghban          #+#    #+#             */
/*   Updated: 2018/10/27 16:32:04 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_ftoa(float n, int offset)
{
	float	fpart;
	int		ipart;
	char	*result;

	ipart = (int)n;
	fpart = n - (float)ipart;
	result = ft_itoa(ipart);
	if (offset != 0)
	{
		result = ft_strjoin(result, ".");
		fpart = fpart * ft_pow(10, offset);
		result = ft_strjoin(result, ft_itoa((int)fpart));
	}
	return (result);
}
