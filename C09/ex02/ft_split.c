/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:40:23 by rerayyad          #+#    #+#             */
/*   Updated: 2022/10/23 10:00:06 by rerayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_tlen(char *str, char *charset)
{
	int	i;
	int	l;

	l = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && ft_check(str[i], charset))
			i++;
		if (str[i])
			l++;
		while (str[i] && !ft_check(str[i], charset))
			i++;
	}
	return (l);
}

int	ft_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_check(str[i], charset))
		i++;
	return (i);
}

char	*ft_strd(char *str, char *charset)
{
	int		l;
	int		i;
	char	*st;

	i = 0;
	l = ft_len(str, charset);
	st = (char *)malloc(sizeof(char) * (l + 1));
	while (i < l)
	{
		st[i] = str[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}

char	**ft_split(char *str, char *charset)
{
	char	**splt;
	int		i;

	i = 0;
	splt = (char **)malloc(sizeof(char *) * (ft_tlen(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && ft_check(*str, charset))
			str++;
		if (*str != '\0')
		{
			splt[i] = ft_strd(str, charset);
			i++;
		}
		while (*str && !ft_check(*str, charset))
			str++;
	}
	splt[i] = 0;
	return (splt);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	char	**splt;
	(void)ac;
	splt = ft_split(av[1], av[2]);
	i = 0;
	while (splt[i])
	{
		printf("%s\n", splt[i]);
		i++;
	}
}
*/
