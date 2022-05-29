/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:55:58 by pauvicto          #+#    #+#             */
/*   Updated: 2022/05/27 21:05:02 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if ((s1[index] == '\0' && s2[index] == '\0') || n == 0)
		return (0);
	else if (s1[index] == '\0')
		return (-1);
	else if (s2[index] == '\0')
		return (1);
	while (index < n)
	{
		if (*(unsigned char *)(s1 + index) != *(unsigned char *)(s2 + index))
		{
			if (*(unsigned char *)(s1 + index) > *(unsigned char *)(s2 + index))
				return (1);
			if (*(unsigned char *)(s1 + index) < *(unsigned char *)(s2 + index))
				return (-1);
		}
		index++;
	}
	return (0);
}
