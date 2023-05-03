/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <skaewpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:51:10 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 19:14:12 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ostr;
	unsigned char	uc;

	ostr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*ostr == uc)
			return ((void *)ostr);
		ostr++;
	}
	return (NULL);
}
