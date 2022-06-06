/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayyad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:07:11 by rrayyad           #+#    #+#             */
/*   Updated: 2021/08/26 09:28:39 by rrayyad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	int *ptr;
	if (max - min <= 0)
	{
		ptr = NULL;
		return (*ptr);
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
	*range = ptr;
	return (max - min);

}

int main()
{
	int *ptr;
	int i = 89;
	printf("%d", ft_ultimate_range(&ptr, 50, 100));
}
