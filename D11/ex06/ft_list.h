/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:06:11 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/25 10:30:54 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
​
//# include "libft/libft.h"
# include "libft/printf/ft_printf.h"
# include <unistd.h>
​
struct	s_node
{
	int				value;
	int				sorted;
	struct s_node	*next;
	struct s_node	*prev;
}					test_node;
​
struct	s_lis
{
	char			*command;
	struct s_lis	*next;
}					test_list;
​
struct	s_stack
{
	int				capacity;
	int				max_a;
	int				end;
	struct s_node	*tail;
	struct s_lis	*list;
	struct s_node	*pivot;
	struct s_node	*stack;
}					test_stack;
​
struct s_node		*pop(struct s_stack **st);
struct s_stack		*init_stack();
struct s_node		*init_node(int value);
struct s_node		*find_node(struct s_stack **st, int val);
struct s_node		*find_spot(struct s_stack **b, int incoming);
void				to_spot3(struct s_stack **a, struct s_stack **b,
						struct s_node **tmp, int tag);
void				to_spot2(struct s_stack **a, struct s_stack **b,
						struct s_node **tmp, struct s_node *spot);
void				to_spot(struct s_stack **a, struct s_stack **b,
						struct s_node **tmp, struct s_node *spot);
void				set_pos(struct s_stack **a, struct s_stack **b,
						struct s_node *spot, int incoming);
void				to_end(struct s_node **tmp);
void				quicksort(int *number, int first, int last);
void				align_to_front(struct s_stack **a, struct s_stack **b);
void				push(struct s_stack **st, struct s_node *node);
void				to_stack(int value, struct s_stack **a);
void				prep_b(struct s_stack **a, struct s_stack **b,
						int incoming);
void				set_cue(struct s_stack **a, int *num_arr);
void				set_datum(struct s_stack **a, int *num_arr, int size);
void				sa(struct s_stack **a);
void				sb(struct s_stack **a, struct s_stack **b);
void				ss(struct s_stack **a, struct s_stack **b);
void				pb(struct s_stack **a, struct s_stack **b);
void				pa(struct s_stack **b, struct s_stack **a);
void				ra(struct s_stack **a);
void				rb(struct s_stack **a, struct s_stack **b);
void				rr(struct s_stack **a, struct s_stack **b);
void				rra(struct s_stack **a);
void				rrb(struct s_stack **a, struct s_stack **b);
void				rrr(struct s_stack **a, struct s_stack **b);
void				swap(int *a, int *b);
void				print_stack(struct s_stack **stack);
void				print_set(struct s_stack **a, struct s_stack **b);
void				print_moves(struct s_stack **a);
void				init_list(struct s_lis **list, char *str);
void				add_command(struct s_stack **a, char *command);
void				push_swap(struct s_stack **a, struct s_stack **b);
void				final_move(struct s_stack **a, struct s_stack **b);
void				align_to_front(struct s_stack **a, struct s_stack **b);
void				part_combine(struct s_stack **a, struct s_stack **b);
void				side0(struct s_stack **a, struct s_stack **b,
						struct s_node *spot, int incoming);
void				side1(struct s_stack **a, struct s_stack **b,
						struct s_node *spot, int incoming);
void				analyze(struct s_stack **a, struct s_stack **b,
						int incoming, struct s_node *spot);
void				prep_b(struct s_stack **a,
						struct s_stack **b, int incoming);
int					set_sort_status(struct s_stack **a);
int					find_big(struct s_stack **b);
int					find_side(struct s_stack **a, int value);
int					get_next_value(struct s_stack **a, int big);
int					*make_arr(struct s_stack **b, int incoming);
int					set_sort_status(struct s_stack **a);
int					*init_array(char **list, int length);
int					check_max(int content, int *big);
int					is_sorted(struct s_stack **a);
int					check_next(int *num_arr, struct s_stack **a);
int					is_empty(struct s_stack **stack);
void				set_count_array(struct s_stack **a, int *num_arr);
#endif
