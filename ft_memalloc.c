/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:03:03 by hugsbord          #+#    #+#             */
/*   Updated: 2022/02/08 12:26:37 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*p;
	size_t	i;

	p = ft_calloc(size, sizeof(char));
	i = 0;
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
