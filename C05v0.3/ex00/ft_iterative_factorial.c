/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayyad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:53:02 by rrayyad           #+#    #+#             */
/*   Updated: 2021/08/24 17:19:31 by rrayyad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	a = nb - 1;
	while (a > 1)
	{
		nb = nb * a;
		a--;
	}
	return (nb);
}