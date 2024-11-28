/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_un_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 09:32:58 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/28 01:20:40 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_un_nbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_put_un_nbr(n / 10);
		i += ft_put_un_nbr(n % 10);
	}
	else
	{
		i += ft_putchar(n + 48);
	}
	return (i);
}
// #include <stdio.h>
// int main()
// {
//     unsigned int test_cases[] = {0, 1, 42, 12345, 987654321, 4294967295}; // Including 0, small and large numbers
//     int i;

//     printf("Testing ft_put_un_nbr:\n");
    
//     for (i = 0; i < 6; i++) {
//         printf("Test case %d: ", i+1);
//         ft_put_un_nbr(test_cases[i]);
//         printf("\n");
//     }

//     return 0;
// }
