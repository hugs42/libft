/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugsbord <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:53:02 by hugsbord          #+#    #+#             */
/*   Updated: 2019/11/21 16:31:56 by hugsbord         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if ((new != NULL) && (alst != NULL))
	{
		while (*alst != NULL)
			alst = &(*alst)->next;
		*alst = new;
		new->next = NULL;
	}
	*alst = new;
	new->next = NULL;
}
