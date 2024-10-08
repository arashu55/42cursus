/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:24:00 by ashu              #+#    #+#             */
/*   Updated: 2024/10/08 21:32:54 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"


size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != 0)
    {
        i++;
    }
    return i;
}