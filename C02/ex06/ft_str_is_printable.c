/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:29:42 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/25 12:30:44 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_printable(char f)
{
	return (f >= 32 && f <= 126);
}

int	ft_str_is_printable(char *str)
{
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if (!is_printable(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_printable("CIAO"));
	printf("%d", ft_str_is_printable("1234"));
	printf("%d", ft_str_is_printable("\n"));
}*/
