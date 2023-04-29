/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:51:10 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/29 13:02:24 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ostr;

	ostr = (unsigned char *)s;
	while (n--)
	{
		if (*ostr == (char )c)
			return (ostr);
	}
	return(NULL);
}
