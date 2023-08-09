/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:05:07 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/26 12:05:09 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1) - (int)(*s2));
}

/*int main()
{
	char str1[] = "stringa";
	char str2[] = "stringa2";
	char str3[] = "stringa3";
	char str4[] = "stringa";
	
	int	risultato = ft_strcmp(str1, str2);
	int risultato2 = ft_strcmp(str1, str3);
	int risultato3 = ft_strcmp(str1, str4);
	
	printf("%d\n", risultato);
	printf("%d\n", risultato2);
	printf("%d\n", risultato3);
	
	return (0);
}*/
