/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <skaewpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:19:29 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 21:39:03 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_strings(char *str, char sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (sep == str[i]))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && (sep != str[i]))
			i++;
	}
	return (count);
}

static int	ft_strlen_sep(char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && sep != str[i])
		i++;
	return (i);
}

static char	*ft_word(char *str, char sep)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, sep);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *str, char sep)
{
	char	**strings;
	int		words;

	words = 0;
	strings = (char **)malloc(sizeof(char *) \
			* (count_strings((char *)str, sep) + 1));
	if (!strings)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && sep == *str)
			str++;
		if (*str != '\0')
		{
			strings[words] = ft_word((char *)str, sep);
			words++;
		}
		while (*str && sep != *str)
			str++;
	}
	strings[words] = 0;
	return (strings);
}
