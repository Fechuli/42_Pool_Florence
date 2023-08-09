/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:03:44 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/06 17:03:46 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

int	ft_strlen(char *str)
{
	int	string;

	string = 0;
	while (str[string] != '\0')
	{
		string++;
	}
	return (string);
}

int	ft_strjoin_check(int size, char **strs, int *tot_length)
{
	int	i;

	i = 0;
	while (i < size)
	{
		*tot_length += ft_strlen(strs[i]);
		i++;
	}
	return (1);
}

char	*ft_strjoin_size(int size, char *ris, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcat(ris, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(ris, sep);
		}
		i++;
	}
	return (ris);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tot_length;
	char	*ris;
	char	*empty_str;

	tot_length = 0;
	if (size <= 0 || !ft_strjoin_check(size, strs, &tot_length))
	{
		empty_str = (char *)malloc(1);
		if (empty_str != 0)
			empty_str[0] = '\0';
		return (empty_str);
	}
	tot_length += (ft_strlen(sep) * (size - 1));
	ris = (char *)malloc(tot_length + 1);
	if (ris == 0)
		return (0);
	ris[0] = '\0';
	ft_strjoin_size(size, ris, strs, sep);
	return (ris);
}

/*int main(void)
{
    char *strs[] = {"Ciao", "mi", "chiamo", "Federico."};
    char *sep = " ";
    char *ris = ft_strjoin(4, strs, sep);

    if (ris != NULL)
    {
        printf("%s\n", ris);
        free(ris);
    }
    else
    {
        printf("Hai fatto delle boiate, provvedi.\n");
    }
    return 0;
}*/
