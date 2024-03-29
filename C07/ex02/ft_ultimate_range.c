/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:49:32 by rerayyad          #+#    #+#             */
/*   Updated: 2022/08/09 18:59:31 by rerayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	len;

	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *) malloc (sizeof (int) * len);
	if (!tab)
		return (-1);
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (len);
}
