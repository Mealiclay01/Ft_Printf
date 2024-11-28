/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:26:18 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/28 02:09:57 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ftprint(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'x')
		count += ft_putlowerhexa(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_putupperhexa(va_arg(args, unsigned int));
	else if (c == 'u')
		count += ft_put_un_nbr(va_arg(args, unsigned int));
	else if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] == '\0')
			return (-1);
		if (str[i] == '%')
		{
			count += ftprint(str[i + 1], args);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
// int main()
// {
//    unsigned int j = 1165461;
//     int *l = &j;
// 	char tt[] = "ythguthgruhgriurtghut";
// 	char *s = tt;
//     int thostyping = printf("%s,hhshshshshshsh%d\n  hexa : %p\n",tt,j,s);
// int minetyping = ft_printf ("%s,hhshshshshshsh%d\n  hexa : %p\n",tt,j,s);
//     printf("mine %d not mine %d\n",thostyping,minetyping);
//  }
// #include <stdio.h>
// #include <limits.h>
// int main()
// {

// 	int c = ft_printf("\n%%");
// 	ft_printf("\n%%");
// }
#include <stdio.h>

// Assuming your ft_printf is implemented as described
int main()
{
    int c;

    // 1. Basic string
    c = ft_printf("Hello, World!\n");
    printf("Returned: %d\n", c);
    // 2. Integer
    c = ft_printf("The number is: %d\n", 42);
    printf("Returned: %d\n", c);

    // 3. Hexadecimal (lowercase)
    c = ft_printf("Hexadecimal: %x\n", 255);
    printf("Returned: %d\n", c);

    // 4. Hexadecimal (uppercase)
    c = ft_printf("Hexadecimal: %X\n", 255);
    printf("Returned: %d\n", c);

    // 5. Unsigned Integer
    c = ft_printf("Unsigned: %u\n", 4294967295U);
    printf("Returned: %d\n", c);

    // 6. Character
    c = ft_printf("Character: %c\n", 'A');
    printf("Returned: %d\n", c);

    // 7. String
    c = ft_printf("String: %s\n", "Test");
    printf("Returned: %d\n", c);

    // 8. Pointer
    int num = 42;
    c = ft_printf("Pointer: %p\n", &num);
    printf("Returned: %d\n", c);

    // 9. Literal percent
    c = ft_printf("Percent: %%\n");
    printf("Returned: %d\n", c);

    // 10. Edge case: Empty string
    c = ft_printf("");
    printf("Returned: %d\n", c);

    // 11. Edge case: Invalid specifier
    c = ft_printf("Invalid: %q\n");
    printf("Returned: %d\n", c);

    // 12. Edge case: % at the end of the string
    c = ft_printf("%");
    printf("Returned: %d\n", c);
}
