/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 21:14:05 by skaewpan          #+#    #+#             */
/*   Updated: 2023/04/30 21:58:17 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

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

#include<string.h>

int	main(void)
{
	//char *str1 = "Hello";
	char *str2 = "Hello World";

	//write(1, strdup(str1), ft_strlen(str1) + 1);
	//write(1, "\n", 1);
	write(1, ft_strdup(str2), ft_strlen(str2));
	write(1, "\n", 1);
}
