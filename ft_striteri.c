/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <skaewpan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 06:35:13 by skaewpan          #+#    #+#             */
/*   Updated: 2023/05/01 21:43:04 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	add;

	if (!s || !f)
		return ;
	add = 0;
	while (s[add])
	{
		f(add, &s[add]);
		add++;
	}
}
