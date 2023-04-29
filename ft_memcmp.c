/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:01:49 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/29 15:07:27 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ostr1;
	unsigned char *ostr2;
	int	i;

	i = 0;
	ostr1 = (unsigned char *)s1;
	ostr2 = (unsigned char *)s2;
	while (n--)
	{
		if (ostr1[i] != ostr2[i])
			return (ostr1[i] - ostr2[i]);
		i++;
	}
	return (0);
}
