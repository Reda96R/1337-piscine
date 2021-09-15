/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrayyad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:38:49 by rrayyad           #+#    #+#             */
/*   Updated: 2021/08/23 09:57:26 by rrayyad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}
#include<stdio.h>
int	main()
{
	char s1[] = "0abc";
	char s2[] = "abcd";
	printf("%d", ft_strcmp(s1, s2));
	return (0);	
}
