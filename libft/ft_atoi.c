/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 23:26:54 by ashu              #+#    #+#             */
/*   Updated: 2024/09/12 22:25:06 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int atoi(const char *str)
{
    int sign;
    long long result;

    while (*str == ' ' || *str = '\n' || *str == '\t' || *str == '\r' || *str == '\f' || *str == '\v')
    {
        str++;
    }

    sign = 1;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            sign = -1;
            str++;
        }
    }

    result = 0;
    while (ft_isdigit(*str))
    {
        result = result * 10 + (*str - '0');
        if (result)
        str++;
    }

    return((int)result * sign);
}