/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 21:39:01 by pauvicto          #+#    #+#             */
/*   Updated: 2022/04/14 21:42:03 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		strlen;
	int		i;
	char	*newstring;

	i = 0;
	if (src == NULL)
		return (NULL);
	strlen = ft_strlen(src);
	newstring = (char *) malloc(sizeof (char) * (strlen + 1));
	while (src[i])
	{
		newstring[i] = src[i];
		i++;
	}
	newstring[i] = '\0';
	return (newstring);
}
