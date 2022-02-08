/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:58:11 by hugsbord          #+#    #+#             */
/*   Updated: 2022/02/08 14:59:19 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	if (array != NULL)
	{
		while (array[i])
		{
			if (array[i] != NULL)
			{
				free(array[i]);
				array[i] = NULL;
			}
			i++;
		}
		free(array);
		array = NULL;
	}
}
