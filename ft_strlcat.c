/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:46:00 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/25 14:05:54 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;
	size_t	j;

	dstsize = ft_strlen(destination);
	srcsize = ft_strlen(source);
	i = 0;
	j = dstsize;
	if (dstsize >= size)
		return (srcsize + size);
	while (source[i] && j < size - 1)
	{
		destination[j] = source[i];
		i++;
		j++;
	}
	destination[j] = '\0';
	return (srcsize + dstsize);
}
