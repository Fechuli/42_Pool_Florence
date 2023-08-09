/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:25:31 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/31 12:25:34 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ris;

	ris = 1;
	if (nb == 0)
	{
		ris = 1;
	}
	if (nb < 0)
	{
		ris = 0;
	}
	while (nb > 0)
	{
		ris *= nb;
		nb--;
	}
	return (ris);
}

/*int main(void)
{
	int	risultato;

	risultato = ft_iterative_factorial(-100);
	printf("Il risultato e': %d\n", risultato);
}*/
