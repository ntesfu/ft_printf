/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntesfu <ntesfu@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 08:08:07 by ntesfu            #+#    #+#             */
/*   Updated: 2022/02/04 08:08:10 by ntesfu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_min(int x, int y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

int indexof(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (c == str[i])
            return (i);
		i++;
    }
    return (-1);
}

void	print_space(int *len, int width, char sp)
{
	while (*len < width)
	{
		write(1, &sp, 1);
		(*len)++;
	}
}

void	print_rev_number(long rev, int precision)
{
	if (precision == 0 && rev == 0)
	{
		ft_putchar_fd('0',1);
		return;
	}
	while (rev)
	{
		ft_putchar_fd(rev % 10 + '0', 1);
		rev /= 10;
	}
}

void	print_signed_num_recursive(long nbr, int precision)
{
	if (precision > 0 && nbr == 0)
		return ;
    else if (nbr > (long)9)
    {
        print_signed_num_recursive(nbr / 10, 0);
        ft_putchar_fd(nbr % 10 + '0', 1);
    }
	else
		ft_putchar_fd(nbr % 10 + '0', 1);
}

void    print_unsigned_int_num_recursive(int base_n, char *base, unsigned int nbr, int precision)
{
	if (precision > 0 && nbr == 0)
		return ;
	else if (nbr > (unsigned int)base_n - 1)
	{
		print_unsigned_num_recursive(base_n, base, nbr / base_n, 0);
		ft_putchar_fd(base[nbr % base_n], 1);
	}
	else
		ft_putchar_fd(base[nbr % base_n], 1);
}

void    print_unsigned_num_recursive(int base_n, char *base, unsigned long long nbr, int precision)
{
	if (precision > 0 && nbr == 0)
		return ;
	else if (nbr > (unsigned long long)base_n - 1)
	{
		print_unsigned_num_recursive(base_n, base, nbr / base_n, 0);
		ft_putchar_fd(base[nbr % base_n], 1);
	}
	else
		ft_putchar_fd(base[nbr % base_n], 1);
}

void	ft_strcapitalize(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - ('z' - 'Z');
		str++;
	}
}

int	ft_numlen(unsigned int clone, int base_n)
{
	int	len;

	len = 0;
	while (clone)
		clone = clone / base_n + (0 * len++);
	return (len);
}
