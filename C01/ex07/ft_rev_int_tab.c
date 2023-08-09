/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:47:52 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/07/23 11:47:54 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	inizio;
	int	fine;
	int	tmp;

	inizio = 0;
	fine = size - 1;
	while (inizio < fine)
	{
		tmp = tab[inizio];
		tab[inizio] = tab[fine];
		tab[fine] = tmp;
		fine--;
		inizio++;
	}
}
