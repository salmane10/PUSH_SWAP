/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:03:22 by slouham           #+#    #+#             */
/*   Updated: 2024/06/05 18:58:45 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct s_list {
    
    char *stack_a;
    char *stack_b;
    char *next;
    
}t_list;

typedef struct s_stack
{
    char   value;
    t_list *next;
}t_stack;

//operations
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *b);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);

#endif