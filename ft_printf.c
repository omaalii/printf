/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:24:14 by omaali            #+#    #+#             */
/*   Updated: 2023/11/06 22:19:39 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int ft_printf(const str*, ...)
 {
     va_list arg;
     int     count;

     va_start(arg, str);
     count = 0;
     while (*str != '\0')
     {
         if (*str == '%')
             print_format(*(str++, arg));
         else
             ft_putchr(chr, count);
         count++;
         str++;
     }
     va_end(arg);
     return count;
 }


