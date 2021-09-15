/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayyad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:29:16 by rrayyad           #+#    #+#             */
/*   Updated: 2021/08/25 16:17:50 by rrayyad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	int	i;
	char *ptr = (char*) malloc(sizeof (char) * ft_strlen(src) + 1);
	
	i = 0;
	
	while (src[i])
	{
		ptr[i] =  src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
