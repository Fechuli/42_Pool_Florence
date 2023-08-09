/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 07:26:21 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/03 07:26:24 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[0][i] && argc)
		write(1, &argv[0][i++], 1);
	write(1, "\n", 1);
	return (0);
}