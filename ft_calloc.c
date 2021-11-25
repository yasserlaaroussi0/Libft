/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:55:34 by ylaarous          #+#    #+#             */
/*   Updated: 2021/11/25 14:02:25 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	p = (void *) malloc(num * size);
	if (p == 0)
		return (0);
	ft_bzero(p, num * size);
	return (p);
}
