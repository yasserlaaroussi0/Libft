/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:15:34 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/12 16:15:21 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if ((src == dest) || (n == 0))
		return (d);
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
}
