/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:26:13 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/29 23:12:23 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	stlen_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	stlen_dst = len_dst;
	if (dstsize <= len_dst)
	{
		printf("as");
		return (len_src + dstsize);
	}
	while (*src != '\0'&& len_dst < dstsize - 1)
	{
		dst[len_dst] = *src++;
		len_dst++;
	}
	dst[dstsize] ='\0';
	return (stlen_dst + len_src);
}
