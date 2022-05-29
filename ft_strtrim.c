/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 02:54:33 by pauvicto          #+#    #+#             */
/*   Updated: 2022/05/25 19:00:19 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		inicio;
	int		fim;
	char	*newstring;

	i = 0;
	inicio = 0;
	while (s1[inicio] != '\0' && find_char(s1[inicio], set))
		inicio++;
	fim = ft_strlen(s1);
	while (fim > inicio && find_char(s1[fim - 1], set))
		fim--;
	(newstring = (char *) malloc(sizeof(*s1) * (fim - inicio + 1)));
	if (!newstring)
		return (NULL);
	while (inicio < fim)
	{
		newstring[i] = s1[inicio];
		i++;
		inicio++;
	}
	newstring[i] = '\0';
	return (newstring);
}
