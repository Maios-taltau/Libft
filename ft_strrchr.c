/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <skaewpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 09:35:14 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 15:00:07 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*f_add;

	f_add = s;
	while (*s)
		s++;
	while (s >= f_add)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (NULL);
}
