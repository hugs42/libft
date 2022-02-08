/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:02:23 by hugsbord          #+#    #+#             */
/*   Updated: 2022/02/08 15:15:09 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *str)
{
	int	i;
	int	nb;

	i = 0;
	if (str == NULL)
		return (0);
	nb = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			nb++;
		i++;
	}
	return (nb);
}
