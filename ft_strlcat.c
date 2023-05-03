/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <skaewpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 20:26:13 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 21:44:37 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*add_dst;
	const char	*add_src;
	size_t		i;
	size_t		len_dst;

	i = size;
	add_dst = dst;
	add_src = src;
	while (i-- > 0 && *dst)
		dst++;
	len_dst = dst - add_dst;
	i = size - len_dst;
	if (i-- == 0)
		return (len_dst + ft_strlen(src));
	while (*src)
	{
		if (i > 0)
		{
			*dst++ = *src;
			i--;
		}
		src++;
	}
	*dst = '\0';
	return (len_dst + (src - add_src));
}
