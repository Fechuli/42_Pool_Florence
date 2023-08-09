/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:34:04 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/31 16:34:08 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <limits.h>
//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	tmp;
	long	n;

	tmp = nb;
	if (tmp <= 0)
	{
		return (0);
	}
	if (tmp == 1)
	{
		return (1);
	}
	n = 2;
	if (tmp >= 2)
	{
		while (n * n <= tmp)
		{
			if (n * n == tmp)
			{
				return (n);
			}
			n++;
		}
	}
	return (0);
}

/*int	main(void)
{
	int	risultato;

	risultato = (ft_sqrt(INT_MIN));
	printf("Il risultato e': %d\n", risultato);
}*/
