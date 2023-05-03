/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <skaewpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:17:41 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 19:13:28 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_lencheck(int n, int *sign)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		*sign = -1;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*num;

	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_lencheck(n, &sign);
	num = malloc(sizeof(char) * (i + 1));
	if (!num)
		return (NULL);
	num[i--] = '\0';
	if (n < 0)
		num[0] = '-';
	while (n)
	{
		num[i] = ((n % 10) * sign) + '0';
		n /= 10;
		i--;
	}
	return (num);
}
