/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jniedens <jniedens@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:48:44 by jniedens          #+#    #+#             */
/*   Updated: 2022/12/25 12:48:50 by jniedens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstiteri(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (lst -> next != NULL)
		ft_lstiteri(lst -> next, (*del));
	ft_lstdelone(lst, (*del));
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	ft_lstiteri(*lst, (*del));
	*lst = NULL;
}
