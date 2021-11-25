/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:46:48 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/25 14:04:20 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	char	v;
	char	*r;
	size_t	i;

	v = (char) value;
	r = (char *) pointer;
	i = 0;
	while (i < count)
	{
		r[i] = v;
		i++;
	}
	return (pointer);
}
