/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:33:16 by gdelhota          #+#    #+#             */
/*   Updated: 2024/11/06 16:42:21 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ftcalloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	res_size;

	res_size = nmemb * size;
	if (res_size == 0)
		return (0);
	res = malloc(res_size);
	if (!res)
		return (0);
	ft_bzero(res, res_size);
	return (res);
}
