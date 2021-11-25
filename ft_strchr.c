/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:06:29 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/25 14:06:36 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*strr;
	char	chr;
	int		i;

	strr = (char *) str;
	chr = (char) c;
	i = 0;
	while (strr[i] != chr)
	{
		if (strr[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (strr + i);
}
