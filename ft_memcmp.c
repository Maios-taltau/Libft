/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:01:49 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 21:29:05 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*odst;
	unsigned char	*osrc;
	int				i;

	i = 0;
	odst = (unsigned char *)s1;
	osrc = (unsigned char *)s2;
	while (n--)
	{
		if (odst[i] != osrc[i])
			return (odst[i] - osrc[i]);
		i++;
	}
	return (0);
}
