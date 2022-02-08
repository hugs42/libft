/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:41:43 by hugsbord          #+#    #+#             */
/*   Updated: 2022/02/08 14:42:51 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb <= 2)
		return (nb);
	return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
