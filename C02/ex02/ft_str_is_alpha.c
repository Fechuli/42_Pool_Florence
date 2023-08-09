/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:10:42 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/25 10:10:44 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (!(*str))
	{
		return (1);
	}
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z')) 
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d", ft_str_is_alpha("CIAO"));
	printf("%d", ft_str_is_alpha("1234"));
}*/
