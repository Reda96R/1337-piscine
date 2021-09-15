/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayyad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 11:18:21 by rrayyad           #+#    #+#             */
/*   Updated: 2021/08/09 10:47:31 by rrayyad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(char c)
{
	write(1, &c, 1);
}

void	ft_put_numb(int a, int b)
	{	
	ft_put(a / 10 + '0');
	ft_put(a % 10 + '0');
	write(1, " ", 1);
	ft_put(b / 10 + '0');
	ft_put(b % 10 + '0');
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_numb(a, b);
			b++;
		}
		a++;
	}
}
