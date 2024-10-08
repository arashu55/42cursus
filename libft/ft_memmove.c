/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:47:02 by ashu              #+#    #+#             */
/*   Updated: 2024/10/08 21:05:35 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char * a;
    const unsigned char * b;
    unsigned char *c;
    size_t i;

    if (!dst && !src)
        return NULL;

    c = (unsigned char *)malloc(n);
    if (c == NULL)
        return NULL;

    a = (unsigned char *)dst;
    b = (const unsigned char *)src;
    i = 0;

    while (i < n)
    {
        c[i] = b[i];
        i++;
    }
    
    i = 0;
    while (i < n)
    {
        a[i] = c[i];
        i++;
    }

    free(c);

    return dst;
}