/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:38:42 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/26 03:27:38 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	nb;
	int				count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	nb = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += ft_putlowerhexa(nb);
	return (count);
}
// #include <stdio.h>
// int main() {
//     int i = 1;
//     int *x = &i;

//     ft_putptr(x);

//     printf("\n");
//     printf("%p", x);

//     return (0);
// }
