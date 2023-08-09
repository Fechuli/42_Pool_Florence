/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:20:58 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/31 16:20:59 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	n;

	n = 1;
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	else
	{
		n = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
		return (n);
	}
}

/*int	main(void)
{
	int	n;
	int	risultato;

	n = 10;
	risultato = ft_fibonacci(n);
	printf("Il risultato e': %d\n", risultato);
	return (0);
}*/
