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

int (unsigned long nb, int flag, char* hex)
{
    int count;

    count = 0;
    if (flag == 0)
    {
        count += print_str("0x")
        if (count == -1)
            return ;
        return (count);
    }
    if (!nb && flag == 0)
    {
        count += print_char('0')
        if (count == -1)
            return ;
        return (count);
    }
    flag = 1;
    if (nb == 0)
        return ;
    if (nb != 0)
    {
        print_void(nb / 16, 1, "0123456789abcdef");
        print_char(hex[nb % 16]);
        if (count == -1)
            return ;
        return (count);
    }

}
