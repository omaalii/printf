/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:45:03 by omaali            #+#    #+#             */
/*   Updated: 2023/12/02 08:45:03 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_hex(unsigned int nb, int type, int flag)
{
    char    *hex;
    int     count;

    count = 0;
    if (nb == 0 && flag > 0)
    {
        count += print_char('0');
        if (count == -1)
            return (-1);
    }
    else if (nb != 0)
    {
        flag = 0;
        hex = "0123456789abcdef";
        count += print_hex(nb / 16, type, 0);
        if (count == -1)
            return (-1);
        if (type == 1)
            hex = "0123456789ABCDEF";
        count += print_char(hex[nb % 16]);
        if (count == -1)
            return (-1);
        return (count);
    }
    return (count);
}