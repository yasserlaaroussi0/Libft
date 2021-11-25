/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:30:55 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/25 14:03:52 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	chr;
	size_t			i;

	s = (unsigned char *) str;
	chr = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (s[i] == chr)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
