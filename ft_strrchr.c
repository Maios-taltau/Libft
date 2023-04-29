/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:35:14 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/29 10:09:58 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_occ;

	last_occ = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last_occ = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	else
		return (last_occ);
}
