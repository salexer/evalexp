/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:45:20 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/08 20:26:13 by btion-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexpr.h"

int		eval_expr(char *str)
{
	int		result;

	result = 42;
	return (42);
}

void	ft_poezd(char c, char *texas, char *california)
{
	if (c >= '0' && c <= '9')
		ft_strcat(california, &c);
}

void	to_pn(char *str)
{
	int		cursor;
	char	*texas;
	char	*california;

	cursor = 0;
	while (str[cursor] != '\0')
		ft_poezd(str[cursor], texas, california);
	printf("%s", california);
}

int		main(int ac, char **av)
{
	av = 0;
	if (ac > 1)
	{
		to_pn(av[1]);
		ft_putchar('\n');
	}
	return (0);
}
