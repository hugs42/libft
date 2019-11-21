/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 09:28:07 by hugsbord          #+#    #+#             */
/*   Updated: 2019/11/19 11:55:43 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list		*elem;

	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
		elem->content = NULL;
	else
		elem->content = content;
	elem->next = NULL;
	return (elem);
}
