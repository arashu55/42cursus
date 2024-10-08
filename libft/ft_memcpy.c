/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:38:41 by ashu              #+#    #+#             */
/*   Updated: 2024/10/08 21:12:37 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char * a;
    const char * b;
    size_t i;

    if (!dest && !src)
        return NULL;

    a = (char *)dest;
    b = (const char *)src;
    i = 0;

    while (i < n)
    {
        a[i] = b[i];
        i++;
    }

    return dest;
}