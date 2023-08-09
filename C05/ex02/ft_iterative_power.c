/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:34:23 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/31 14:34:24 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ris;

	ris = 1;
	if (nb == 0 && power == 0)
	{
		ris = 1;
	}
	if (power < 0)
	{
		ris = 0;
	}
	while (power > 0)
	{
		ris *= nb;
		power--;
	}
	return (ris);
}

/*int main()
{
	int	risultato;
	
	risultato = (ft_iterative_power(-2,2));
	printf("Il risultato e': %d\n", risultato);
}*/
