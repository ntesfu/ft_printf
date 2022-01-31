/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntesfu <ntesfu@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:26:37 by ntesfu            #+#    #+#             */
/*   Updated: 2022/01/24 18:16:12 by ntesfu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdarg.h>
#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int indexof(char *str, char c);
int ft_printf(const char *str, ...);
int	print_char(int c, int flags[]);

#endif
