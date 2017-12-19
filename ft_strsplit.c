/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szaghban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 03:12:51 by szaghban          #+#    #+#             */
/*   Updated: 2017/12/19 19:50:58 by szaghban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_word_counter(char const *s, char c)
{
	size_t i;
	size_t word;

	i = -1;
	word = 0;
	while (s[++i] && s[i] == c)
		;
	while (s[i])
	{
		word++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char *tmp;
	size_t t;
	t = ft_word_counter(s, c);
	printf("%lu\n", t);
	return ((char **)s);
}

int	main(int argc, const char *argv[])
{
	ft_strsplit(argv[1], argv[2][0]);
	return 0;
}
