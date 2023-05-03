/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:09:38 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 21:31:14 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*odst;
	unsigned char	*osrc;

	odst = dst;
	osrc = (unsigned char *)src;
	if (src < dst)
		while (len--)
			odst[len] = osrc[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
