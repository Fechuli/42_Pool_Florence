/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:41:42 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/25 10:41:44 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_lowercase(char f)
{
	return (f >= 'a' && f <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if (!is_lowercase(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_lowercase("ciao"));
	printf("%d", ft_str_is_lowercase("1234"));
	printf("%d", ft_str_is_lowercase("a(b"));
	printf("%d", ft_str_is_lowercase(""));
}*/
