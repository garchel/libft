/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:51:21 by pauvicto          #+#    #+#             */
/*   Updated: 2022/05/25 17:58:07 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*newstring;

	i = 0;
	if (!s)
		return (NULL);
	newstring = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (newstring == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		newstring[i] = f(i, s[i]);
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
