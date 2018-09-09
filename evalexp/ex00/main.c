/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:45:20 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/09 12:45:20 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

void	step(t_list	*stack, t_list	*buffer, char c)
{
	char	last_stack;
	char	last_buff;

	last_stack = ft_list_last_data(stack);
	last_buff = ft_list_last_data(buffer);
	if (c >= '0' && c <= '9')
		ft_list_push_back(stack, c);
}

void		eval_expr(char *str)
{
	t_list	*stack; //сюда кидаем цифры
	t_list	*buffer; //здесь оперторы

	while (*str != 0)
	{
		step(stack, buffer, str);
		str++
	}
	ft_draw_list(stack);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		eval_expr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
