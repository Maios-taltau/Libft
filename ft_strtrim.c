/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <skaewpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 06:24:04 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 21:49:02 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trim;
	char	*ostr;
	int		len;

	if (!s1 || !set)
		return (NULL);
	ostr = (char *)s1;
	while (*ostr)
	{
		if (ft_strchr(set, *ostr) == NULL)
			break ;
		ostr++;
	}
	len = ft_strlen(ostr);
	while (len)
	{
		if (ft_strchr(set, ostr[len - 1]) == NULL)
			break ;
		len--;
	}
	trim = malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, ostr, len + 1);
	return (trim);
}
