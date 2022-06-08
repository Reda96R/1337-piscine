/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayyad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:23:15 by rrayyad           #+#    #+#             */
/*   Updated: 2021/08/25 17:27:24 by rrayyad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include<stdio.h>
#include<stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;

	i = 0;
	int *ptr;
	if (max - min <= 0)
	{
		ptr = NULL;
		return (ptr);
	}
	ptr = (int*) malloc(sizeof (int) * (max - min));
	if (ptr == NULL)
		return (0);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
		return (ptr);
}

/*int	main()
{
	int	i = 0;
	int *ptr;
	ptr = ft_range(0, 100);
	while (i < 100)
	{
	printf("%d", ptr[i]);
	i++;
	}
}
*/
