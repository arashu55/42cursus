/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:31:47 by ashu              #+#    #+#             */
/*   Updated: 2024/10/08 21:46:41 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *a;
    unsigned char b;
    size_t i;

    a = (const unsigned char *)s;
    b = (unsigned char)c;
    i = 0;

    while(i < n)
    {
        if (a[i] == b)
        {
            return (void *)&a[i];
        }
        i++;
    }
    return NULL;
}
