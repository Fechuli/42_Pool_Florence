/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:23:35 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/10 10:23:37 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long	n;
	char	array[100];
	int		i;

	n = (long)nb;
	i = 0;
	if (n == 0)
		write(1, "0", 1);
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		array[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (--i >= 0)
		write(1, array + i, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != NULL)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*
int	main(void)
{
	t_stock_str	tab[] = {
		{ 5, "Hello", "Hello" },
		{ 3, "How", "Comment" },
		{ 7, "Welcome", "Welcome" },
		{ 4, "World", "World" },
		{ 0, NULL, NULL } // Terminatore della tabella
	};

	ft_show_tab(tab);

	return (0);
}*/
