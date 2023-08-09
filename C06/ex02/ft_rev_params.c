/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 07:27:06 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/03 07:27:08 by ffiaschi         ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		f = 0;
		while (argv[i][f] != '\0' && argc)
		{
			ft_putchar(argv[i][f]);
			f++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
