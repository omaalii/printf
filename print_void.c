/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:45:46 by omaali            #+#    #+#             */
/*   Updated: 2023/12/02 08:45:46 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_void(unsigned long nb, int flag, char *hex)
{
    int count;

    count = 0;
    if (flag == 0)
    {
        count += print_str("0x");
        if (count == -1)
            return (-1);
    }
    if (!nb && flag == 0)
    {
        count += print_char('0');
        if (count == -1)
            return (-1);
        return (count);
    }
    flag = 1;
    if (nb != 0)
    {
        count += print_void(nb / 16, 1, "0123456789abcdef");
        count += print_char(hex[nb % 16]);
        if (count == -1)
            return (-1);
    }
    return (count);
}

