/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:26:48 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/24 16:35:34 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *) malloc(ft_strlen(source) + 1);
	if (p == NULL)
		return ((char *) NULL);
	while (source[i])
	{
		p[i] = source[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
