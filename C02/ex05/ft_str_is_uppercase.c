/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:26:42 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/25 12:27:44 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_uppercase(char f)
{
	return (f >= 'A' && f <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if (!is_uppercase(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_uppercase("CIAO"));
	printf("%d", ft_str_is_uppercase("1234"));
	printf("%d", ft_str_is_uppercase("a(b"));
	printf("%d", ft_str_is_uppercase("A(B"));
	printf("%d", ft_str_is_uppercase("ABBA"));
	printf("%d", ft_str_is_uppercase(""));
}*/
