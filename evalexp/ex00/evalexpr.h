/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btion-fr <btion-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:46:44 by btion-fr          #+#    #+#             */
/*   Updated: 2018/09/08 20:20:15 by btion-fr         ###   ########.fr       */
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

#endif
