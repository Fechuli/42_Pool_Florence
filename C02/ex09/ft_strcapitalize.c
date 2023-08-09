/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:29:45 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/25 14:29:47 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_check(char c)
{
	if (c >= '0' && c <= 'z')
		if (c < ':' || c > '@')
			if (c < '[' || c > '`')
				return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check(str[i]))
		{
			if (ft_check(str[i - 1]))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
				{
					str[i] += 32;
				}
			}
			else
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char str[] = "ciao sono 5federico+fiaschi !@ yes\n";
	printf("%s", ft_strcapitalize(str));
}*/
