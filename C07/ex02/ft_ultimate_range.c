/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:09:43 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/06 15:09:53 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*f;
	int	i;

	if (min >= max)
		return (0);
	f = malloc(sizeof(int) * (max - min));
	if (f == 0)
		return (0);
	i = 0;
	while (min < max)
	{
		f[i] = min;
		i++;
		min++;
	}
	return (f);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == 0)
		return (0);
	return (max - min);
}

/*int main()
{
    int *range = NULL;
    int min = 10;
    int max = 20;
    int size = ft_ultimate_range(&range, min, max);

    if (range == NULL)
    {
        printf("Memory allocation error.\n");
        return 1;
    }

    printf("Range: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);
    return 0;
}*/
