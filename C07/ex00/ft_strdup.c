/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:59:09 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/06 13:59:13 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

void	dopple(char *duplicate, char *d, char *source)
{
	if (duplicate != 0) 
	{
		d = duplicate;
		while (*source != '\0') 
		{
			*d++ = *source++;
		}
		*d = '\0'; 
	}
}

char	*ft_strdup(char *source)
{
	char	*p;
	int		len;
	char	*duplicate;
	char	*d;

	if (source == 0) 
	{
		return (0);
	}
	d = 0;
	p = source;
	while (*p != '\0') 
	{
		p++;
	}
	len = p - source;
	duplicate = (char *)malloc(len + 1);
	dopple(duplicate, d, source);
	return (duplicate);
}

/*int	main(void)
{
	char	*source;
	char	*duplicate;

	source = "Ciao!";
	duplicate = ft_strdup(source);
	if (duplicate != NULL)
	{
		printf("Original string: %s\n", source);
		printf("Duplicate string: %s\n", duplicate);
		free(duplicate);
	}
	else 
	{
		printf("Memoria insufficiente per allocare la stringa duplicata.\n");
	}
	return (0);
}*/
