/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:26:54 by ashu              #+#    #+#             */
/*   Updated: 2024/10/07 22:35:56 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{

    int sign;
    long long result;

    while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || *str == '\f' || *str == '\v')
    {
        str++;
    }
 
    sign = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            sign = -1;
        }
        str++;
        
    }

    result = 0;
    while (ft_isdigit(*str))
    {
        if (result > (LONG_MAX - (*str - '0')) / 10)
        {
            // オーバーフローの場合
            if (sign == 1)
                return ((int)LONG_MAX);
            else
                return ((int)LONG_MIN);
        }
        result = result * 10 + (*str - '0');
        str++;
    }

    return((int)result * sign);
}
