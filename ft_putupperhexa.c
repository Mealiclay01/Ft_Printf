/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupperhexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 03:27:43 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/26 23:15:20 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putupperhexa(unsigned int nb)
{
	char	*hex;
	int		count;

	hex = "0123456789ABCDEF";
	count = 0;
	if (nb >= 16)
		count += ft_putupperhexa(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}

// #include <stdio.h>
// int main()
// {
//     int i = 2345558;
//     int im = ft_putupperhexa(i);
//     int it = printf("%X", i);
//     printf("\nim  %d it  %d",im ,it);
// }
