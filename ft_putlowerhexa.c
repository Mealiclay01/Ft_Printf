/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowerhexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:45:20 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/26 03:38:53 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlowerhexa(unsigned long nb)
{
	char	*hex;
	int		count;

	hex = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
		count += ft_putlowerhexa(nb / 16);
	count += ft_putchar(hex[nb % 16]);
	return (count);
}
//  #include <stdio.h>
//  #include <limits.h>
//  int main()
//  {
//      int i = 13245678;
//      int im = ft_putlowerhexa(i);
//  	printf("\n");
//      int it = printf("%x", i);
//      printf("\nim  %d it  %d",im ,it);
// }
