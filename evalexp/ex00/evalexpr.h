/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:46:44 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 12:45:16 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR_H
# define EVALEXPR_H

# include <unistd.h>
# include <stdio.h>

char	*g_stack;
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);

typedef struct	s_list
{
	char					data;
	struct s_list	*next;
}				t_list;
t_list	*ft_create_elem(void data);
void		ft_list_push_back(t_list **begin_list, void data);
t_list	*ft_list_last(t_list *begin_list);
char		ft_list_last_data(t_list *begin_list);
void		ft_draw_list(t_list *begin_list);
#endif
