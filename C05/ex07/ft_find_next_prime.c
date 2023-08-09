/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:17:37 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/01 10:17:39 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <limits.h>

int	is_prime(int num)
{
	int	n;

	n = 2;
	if (num < 2)
	{
		return (0);
	}
	while (n * n <= num && n < 46341)
	{
		if (num % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*int	main(void)
{
	int	n;
	int	risultato;

	n = 11;
	risultato = ft_find_next_prime(n);
	printf("Il primo numero primo maggiore o uguale a %d e' %d\n", n, risultato);
	return (0);
}*/
