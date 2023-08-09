/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:44:53 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/20 12:45:05 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_writechar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n)
{
	ft_writechar(n / 10 + '0');
	ft_writechar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_number(a);
			ft_writechar(' ');
			ft_print_number(b);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*int main()
{
	ft_print_comb2();
}*/
