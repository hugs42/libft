/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:51:16 by hugsbord          #+#    #+#             */
/*   Updated: 2022/02/08 11:30:56 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_check_base(char *str)
{
	int		i;
	char	*base_min;
	char	*base_max;

	i = 0;
	base_min = "0123456789abcdef";
	base_max = "0123456789ABCDEF";
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'f')
			return (base_min);
		i++;
	}
	return (base_max);
}

int	ft_strclen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		res;
	int		sign;
	char	*base;

	i = 0;
	res = 0;
	sign = 1;
	base = ft_check_base((char *)str);
	while (((str[i] == 32) || (str[i] >= 9 && str[i] <= 13)) && str[i] != 0)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || ((str[i] >= 'A' && str[i] <= 'F')
			|| (str[i] >= 'a' && str[i] <= 'f')))
	{
		res = res * str_base + (ft_strclen(base, str[i]));
		i++;
	}
	return (res * sign);
}
