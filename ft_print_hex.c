/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:36:23 by hugsbord          #+#    #+#             */
/*   Updated: 2022/02/08 11:16:50 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(char *str)
{
	int		nb;
	char	*base;

	base = "0123456789abcdef";
	nb = ft_atoi(str);
	if (nb == 0)
		write(1, "0", 1);
	while (nb)
	{
		write(1, &base[nb % 16], 1);
		nb /= 16;
	}
	write(1, "\n", 1);
}
