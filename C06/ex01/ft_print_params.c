/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 07:26:48 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/03 07:26:49 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	f;

	i = 1;
	while (argc > i)
	{
		f = 0;
		while (argv[i][f])
		{
			ft_putchar(argv[i][f]);
			f++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
