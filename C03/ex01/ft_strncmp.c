/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:22:37 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/26 12:22:39 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((int)(*s1) - (int)(*s2));
}

/*int main()
{
	char str1[] = "stringa";
	char str2[] = "stringa2";
	char str3[] = "stringabella";
	
	int risultato = ft_strncmp(str1, str2, 3);
    int risultato2 = ft_strncmp(str1, str3, 8);
    
    printf("%d\n", risultato);
    printf("%d", risultato2);
}*/
