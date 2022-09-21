/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:46:43 by bkozluca          #+#    #+#             */
/*   Updated: 2022/09/21 17:13:53 by bkozluca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_five(t_stack **a_stack, t_stack **b_stack)
{
	int	index;

	while (3 < ft_lstsize(*a_stack))
	{
		index = ft_lstmin_pos(*a_stack);
		if (index < ft_lstsize(*a_stack) / 2)
			sa(*a_stack);
		else if (index == ft_lstsize(*a_stack) / 2)
		{
			ra(a_stack);
			ra(a_stack);
		}
		else if (index > ft_lstsize(*a_stack) / 2 && index != 3)
			rra(a_stack);
		else
		{
			rra(a_stack);
			rra(a_stack);
		}
		pb(b_stack, a_stack);
	}
}

void	sort_five(t_stack **a, t_stack **b)
{
	pb_five(a, b);
	sort_three(a);
	if ((*b)->content < (*b)->next->content)
		sb(*b);
	pa(a, b);
	pa(a, b);
}