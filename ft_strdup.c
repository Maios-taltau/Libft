/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:14:05 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/30 22:13:54 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*nstr;
	size_t	len_str;

	len_str = (ft_strlen(s1) + 1);
	nstr = (char *)malloc(len_str * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	return ((char *)ft_memcpy(nstr, s1, len_str));
}
