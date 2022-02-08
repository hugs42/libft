/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:00:32 by hugsbord          #+#    #+#             */
/*   Updated: 2022/02/08 12:27:18 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_check_base(int base)
{
	if (base < 2 || base > 16)
		return (1);
	return (0);
}

static int	ft_check_len_str(long long int value, int base)
{
	int	i;

	i = 1;
	if (value < 0 && base == 10)
	{
		value = value * -1;
		i = i + 1;
	}
	else if (value < 0 && base != 10)
		return (-1);
	while (value >= base)
	{
		value = value / base;
		i++;
		if (value < base)
			return (i);
	}
	return (i);
}

static char	*ft_fill_str(char *str, long long int value, int len, int base)
{
	int		start;
	char	*base_str;

	base_str = "0123456789ABCDEF";
	str[len] = '\0';
	len = len - 1;
	if (value < 0)
	{
		value = value * -1;
		start = 1;
		str[0] = '-';
	}
	else
		start = 0;
	while (len >= start)
	{
		str[len] = base_str[value % base];
		value = value / base;
		len--;
	}
	return (str);
}

char	*ft_itoa_base(int value, int base)
{
	int				len;
	char			*res;
	long long int	llvalue;

	llvalue = value;
	if (ft_check_base(base))
		return (NULL);
	len = ft_check_len_str(llvalue, base);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	res = ft_fill_str(res, llvalue, len, base);
	return (res);
}
