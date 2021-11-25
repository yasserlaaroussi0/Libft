/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:40:19 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/25 14:05:24 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	i;
	int	j;
	int	cp;

	i = 0;
	cp = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && j == 0)
		{
			cp++;
			j = 1;
		}
		else if (s[i] == c && j == 1)
			j = 0;
		i++;
	}
	return (cp);
}

static int	count_char(const char *s, char c)
{
	int	i;
	int	cp;

	i = 0;
	cp = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cp++;
		}
		else
			return (cp);
		i++;
	}
	return (cp);
}

static char	**ft_free(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**p;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len = count_word(s, c);
	p = (char **)malloc(sizeof(char *) * (len + 1));
	if (!p)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		j = count_char(s, c);
		p[i++] = ft_substr(s, 0, j);
		if (!p)
			ft_free((char **)s, i);
		s = s + j;
	}
	p[i] = NULL;
	return (p);
}
