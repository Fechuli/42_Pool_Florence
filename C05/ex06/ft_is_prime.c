/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 09:46:07 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/01 09:46:09 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <limits.h>

int	ft_is_prime(int nb)
{
	int	n;
	int	ris;

	n = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (nb > n)
	{
		ris = nb % n;
		if (ris == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*int main()
{
	printf("Il risultato e': %d\n", ft_is_prime(1));
}*/
