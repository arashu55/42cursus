/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:47:02 by ashu              #+#    #+#             */
/*   Updated: 2024/10/12 15:45:35 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char * a;
    const unsigned char * b;

    if (!dst && !src)
        return NULL;

    a = (unsigned char *)dst;
    b = (const unsigned char *)src;

    if (a > b && a < b + n)
    {
        while (n--)
            a[n] = b[n];
    }
    else
    {
        size_t i = 0;
        while (i < n)
        {
            a[i] = b[i];
            i++;
        }
    }


    // while (i < n)
    // {
    //     c[i] = b[i];
    //     i++;
    // }
    
    // i = 0;
    // while (i < n)
    // {
    //     a[i] = c[i];
    //     i++;
    // }

    return dst;
}