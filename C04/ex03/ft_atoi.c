/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:15:31 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/31 11:15:35 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*forbidden_chars(char *str)
{
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
	{
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int	risultato;
	int	segno;

	segno = 0;
	risultato = 0;
	str = forbidden_chars(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			segno++;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		risultato = risultato * 10 + (*str - '0');
		str++;
	}
	if (segno % 2 == 1)
	{
		risultato = -risultato;
	}
	return (risultato);
}

/*int	main(void)
{
	char	*str;
	char	*str_b;
	char	*str_c;
	char	*str_d;
	char	*str_e;
	int		num;

	str = "12345";
	str_b = "123abc";
	str_c = "abc123";
	str_d = "a1b2c3d4";
	str_e = "1 2 3 4 5";
	num = ft_atoi(str_e);
	printf("Il numero convertito è: %d\n", num);
	return (0);
}*/
