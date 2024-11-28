/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:02:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/26 03:26:53 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putchar(int c);
int	ft_put_un_nbr(unsigned int n);
int	ft_putupperhexa(unsigned int nb);
int	ft_putlowerhexa(unsigned long nb);
int	ft_putptr(void *ptr);
#endif
