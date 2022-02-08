/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:27:23 by hugsbord          #+#    #+#             */
/*   Updated: 2022/02/08 13:38:14 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pow(int nb, unsigned int pow)
{
	int	tmp;

	if (pow == 0)
		return (1);
	tmp = ft_pow(nb, pow / 2);
	if (pow % 2 == 0)
		return (tmp * tmp);
	else
		return (nb * tmp * tmp);
}
