/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntesfu <ntesfu@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 08:06:51 by ntesfu            #+#    #+#             */
/*   Updated: 2022/02/04 08:07:01 by ntesfu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include "libft.h"
#include <stdio.h>
#include <unistd.h>

typedef struct s_unsigned_dt
{
    int     len;
    int     base_n;
    char    *base;
    char    *sgn;
}   t_unsgn_dt;

int     indexof(char *str, char c);
int     ft_printf(const char *str, ...);
int 	print_char(int c, int flags[]);
int	    print_string(char *str, int flags[]);
int 	print_signed_int(int num, int flags[]);
int	    print_pointer(unsigned long long ptr, int flags[]);
int	    print_unsigned_int(unsigned int num, int flags[], int base_n, int cap);
void	print_space(int *len, int width, char sp);
void	print_rev_number(long rev, int precision);
void    print_unsigned_num_recursive(int base_n, char *base, unsigned long long nbr, int precision);
void    print_unsigned_int_num_recursive(int base_n, char *base, unsigned int nbr, int precision);
void	print_signed_num_recursive(long nbr, int precision);
void	ft_strcapitalize(char *str);
int	    ft_numlen(unsigned int clone, int base_n);
int     ft_min(int x, int y);

#endif
