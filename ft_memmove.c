/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:09:38 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/29 20:16:58 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*odst;
	unsigned char	*osrc;

	odst = (unsigned char *)dst;
	osrc = (unsigned char *)src;
	if (src < dst)
		while (len--)
			odst[len] = osrc[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
