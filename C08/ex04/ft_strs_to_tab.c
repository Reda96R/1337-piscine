/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerayyad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 08:50:30 by rerayyad          #+#    #+#             */
/*   Updated: 2022/08/10 19:05:16 by rerayyad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include"ft_stock_str.h"

int	ft_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strd(char	*str)
{
	int		i;
	char	*strd;

	strd = malloc(sizeof (char) * ft_len(str) + 1);
	if (!strd)
		return (0);
	i = 0;
	while (str[i])
	{
		strd[i] = str[i];
		i++;
	}
	strd[i] = '\0';
	return (strd);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_len(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strd(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

#include<unistd.h>
void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n <= 9)
		ft_putchar(n + 48);
}

void	ft_put(char	*str)
{
	int	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_put(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_put(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
int	main(int	ac, char	*av[])
{
	ft_show_tab(ft_strs_to_tab(ac, av));
}

