/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:15:12 by coder             #+#    #+#             */
/*   Updated: 2022/04/14 02:07:29 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;
	int		i;

	i = 0;
	c = 0;
	while (c < n)
	{
		*((char *)dest + i) = *(char *)(src + i);
		i++;
		c++;
	}
	return (dest);
}
