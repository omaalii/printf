/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:46:31 by omaali            #+#    #+#             */
/*   Updated: 2023/12/27 16:48:43 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int		ft_printf(char const *str, ...);
int 	print_char(int c);
int 	print_str(char *str);
int 	print_hex(unsigned int nb, int type, int flag);
int		print_int(int nb);
int 	print_unsint(unsigned int nb);
int 	print_void(unsigned long nb, int flag, char* hex);

#endif
