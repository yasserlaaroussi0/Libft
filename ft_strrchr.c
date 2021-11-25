/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:07:09 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/12 16:33:46 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*strr;
	char	chr;
	int		i;

	strr = (char *) str;
	chr = (char) c;
	i = ft_strlen(strr);
	while (i >= 0)
	{
		if (strr[i] == chr)
			return (strr + i);
		i--;
	}
	return (NULL);
}
