/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:26:04 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/29 13:42:39 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *odst;
	unsigned char *osrc;

	odst = (unsigned char *)dst;
	osrc = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*odst++ = *osrc++;
	return (odst);
}
