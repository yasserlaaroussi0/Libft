/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:19:56 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/24 16:49:21 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	last(const char *str, const char *set)
{
	int	i;
	int	j;

	j = ft_strlen(str);
	i = 0;
	while (set[i])
	{
		if (str[j - 1] == set[i])
		{
			i = 0;
			j--;
		}
		else
			i++;
	}
	return (j);
}

static size_t	first(const char *str, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[i] && str[i])
	{
		if (str[j] == set[i])
		{
			i = 0;
			j++;
		}
		else
			i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*p;
	size_t	beg;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	beg = first(s1, set);
	end = last(s1, set);
	i = 0;
	if (beg >= end)
		return (ft_strdup(""));
	p = (char *) malloc(end - beg + 1);
	if (!p)
		return (NULL);
	while (beg < end)
	{
		p[i] = s1[beg];
		i++;
		beg++;
	}
	p[i] = '\0';
	return (p);
}
