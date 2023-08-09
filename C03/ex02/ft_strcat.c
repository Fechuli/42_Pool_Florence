/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:11:09 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/26 14:11:11 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

/*int	main(void)
{
	char	s1[80] = "Benvenuto giovane viandante. ";
	char	s2[] = "Cosa ti porta nel magico mondo di Babigon?";

	ft_strcat(s1, s2);
	printf("%s\n", s1);
	return (0); 
}*/
