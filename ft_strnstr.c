/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:32:05 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/12 17:26:19 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hstk;
	char	*ndl;
	size_t	i;
	size_t	j;

	ndl = (char *) needle;
	hstk = (char *) haystack;
	i = 0;
	if (ndl[i] == '\0')
	{
		return (hstk);
	}
	while (hstk[i] != '\0')
	{
		j = 0;
		while (hstk[i + j] == ndl[j] && i + j < len)
		{
			if (ndl[j + 1] == '\0')
				return (&hstk[i]);
			j++;
		}
		i++;
	}
	return (0);
}
