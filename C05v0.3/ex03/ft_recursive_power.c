/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayyad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:52:59 by rrayyad           #+#    #+#             */
/*   Updated: 2021/08/24 17:29:07 by rrayyad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
	{
		if (nb == 0 && power == 0)
			return (1);
		else if (power == 0)
			return (1);
	}
	return (nb * ft_recursive_power(nb, (power - 1)));
}
