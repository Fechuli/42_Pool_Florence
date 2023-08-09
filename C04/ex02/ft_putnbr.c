/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 17:10:15 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/27 17:10:16 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	digit;
	long	nl;

	nl = n;
	if (nl < 0)
	{
		write(1, "-", 1);
		nl = -nl;
	}
	digit = '0' + (nl % 10);
	if (nl >= 10)
		ft_putnbr(nl / 10);
	write(1, &digit, 1);
}
/*int main()
{
	ft_putnbr(190);
}*/
