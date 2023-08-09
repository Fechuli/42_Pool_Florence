/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
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

/*void	print_range(int *range, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d ~ ", range[i]);
	}
	if (size > 0)
		printf("%d\n", range[size - 1]);
}

int main(void)
{
	int	*range;

	range = ft_range(1, 11);
	printf("I numeri tra il minimo e il massimo sono:\n");
	print_range(range, 10);
	
}*/
