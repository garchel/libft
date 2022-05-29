/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:27:25 by coder             #+#    #+#             */
/*   Updated: 2022/05/27 20:27:47 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	c;
	int		i;

	i = 0;
	c = 0;
	if ((char *)src < (char *)dest && (char *)src + n > (char *)dest)
	{
		while (c < n--)
			*((char *)dest + (int)n) = *((char *)src + (int)n);
		return (dest);
	}
	else
	{
		while (c < n)
		{
			*((char *) dest + i) = *(char *)(src + i);
			i++;
			c++;
		}
		return (dest);
	}
}
