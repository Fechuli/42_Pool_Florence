/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffiaschi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:38:52 by ffiaschi          #+#    #+#             */
/*   Updated: 2023/08/08 12:38:53 by ffiaschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ({\
	int nbr;\
	if (Value > 0) nbr = Value;\
	else nbr = -Value;\
	nbr;\
})

#endif