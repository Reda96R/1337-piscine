/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:51:32 by rerayyad          #+#    #+#             */
/*   Updated: 2022/10/12 11:59:14 by rerayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len0(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(char *str[], int s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < s)
	{
		j += ft_len0(str[i]);
		i++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*str;

	if (size == 0)
		return ((char *)malloc(sizeof (char)));
	len = ft_len(strs, size) + (ft_len0(sep) * (size - 1));
	str = (char *)malloc(sizeof (char) * len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(str, strs[i]);
		str += ft_len0(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(str, sep);
			str += ft_len0(sep);
		}
		i++;
	}
	*str = '\0';
	str -= len;
	return (str);
}
/*
#include<stdio.h>
int	main()
{
	char	**strs;
	char	*sep;
	char	*r;
	int	s = 3;
	strs = (char **)malloc(sizeof (char) * 3);
	strs[0] = (char *)malloc(sizeof (char) * 4 + 1);
	strs[1] = (char *)malloc(sizeof (char) * 5 + 1);
	strs[2] = (char *)malloc(sizeof (char) * 2 + 1);
	strs[0] = "test";
	strs[1] = "hello";
	strs[2] = "hi";
	sep = " ,";
	r = ft_strjoin(s, strs, sep);
	printf("%s", r);
	free(r);
}
*/
