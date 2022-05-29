/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 02:01:32 by pauvicto          #+#    #+#             */
/*   Updated: 2022/05/14 23:09:53 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mk_str(const char *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	string_count(char const *s, char c)
{
	int		i;
	int		nb_strings;

	i = 0;
	nb_strings = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
		}
		else
		{
			nb_strings++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (nb_strings);
}

char	**ft_split(char const *s, char c)
{
	int		nb_strings;
	char	**mtz;
	int		i;

	nb_strings = string_count(s, c);
	mtz = (char **)malloc(sizeof (char *) * (nb_strings + 1));
	if (!mtz)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			mtz[i] = mk_str(s, c);
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	mtz[i] = NULL;
	return (mtz);
}
