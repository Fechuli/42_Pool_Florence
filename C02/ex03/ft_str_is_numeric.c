/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:10:42 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/25 10:10:44 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d", ft_str_is_numeric("1234"));
	printf("%d", ft_str_is_numeric("4fv0"));
	printf("%d", ft_str_is_numeric("AB"));
	printf("%d", ft_str_is_numeric("ABC-;DEF5"));
	printf("%d", ft_str_is_numeric("010"));
	printf("%d", ft_str_is_numeric(""));
}*/
