/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:02:41 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/30 13:54:45 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	r_hs;
	size_t	r_nd;

	r_hs = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[r_hs] && r_hs < len)
	{
		r_nd = 0;
		while (needle[r_nd] == haystack[r_hs + r_nd] && (r_hs + r_nd) < len)
		{
			r_nd++;
			if (needle[r_nd] == '\0')
				return ((char *)haystack + r_hs);
		}
		r_hs++;
	}
	return (NULL);
}
