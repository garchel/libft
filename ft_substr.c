/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 01:36:50 by pauvicto          #+#    #+#             */
/*   Updated: 2022/05/25 18:59:31 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	mk_substr(const char *s, char *newstring, int start, int len)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (s[i])
	{
		if (i >= start && i2 < len)
		{
			newstring[i2] = s[i];
			i2++;
		}
		i++;
	}
	newstring[i2] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstring;

	if (ft_strlen(s) < start)
	{
		(newstring = malloc(sizeof(char)));
		if (!newstring)
			return (NULL);
		newstring[0] = '\0';
		return (newstring);
	}
	else
	{
		if (start + len > ft_strlen(s))
			len = ft_strlen(s) - start;
		(newstring = malloc(sizeof(char) * (len + 1)));
		if (!newstring)
			return (NULL);
		mk_substr(s, newstring, start, len);
		return (newstring);
	}
}
