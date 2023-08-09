/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:14:12 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/26 16:14:22 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && nb > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}

int main()
{
	char	s1[80] = "Benvenuto giovane viandante. ";
	char	s2[] = "Cosa ti porta nel magico mondo di Babigon?";
	
	ft_strncat(s1, s2, 4);
	printf("%s\n", s1);
	return (0);
}
