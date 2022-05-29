/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauvicto <pauvicto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:00:31 by pauvicto          #+#    #+#             */
/*   Updated: 2022/05/25 19:04:16 by pauvicto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_dif(const char *big, const char *little, int i, int len)
{
	int	i2;

	i2 = 0;
	while (big[i + i2] == little[i2])
	{
		if (little[i2 + 1] == '\0')
			return (0);
		i2++;
		if (--len == 0)
			return (1);
	}
	if (big[i + i2] != little[i2])
		return (1);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	i2;

	i = -1;
	i2 = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[++i] && len > 0)
	{
		if (big[i] == little[i2])
		{
			i2 = 0;
			if (check_dif(big, little, i, len) == 0)
				return ((char *)big + i);
			else
				i2 = 0;
		}
		len--;
	}
	return (NULL);
}
