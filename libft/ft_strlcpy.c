/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:25:13 by ashu              #+#    #+#             */
/*   Updated: 2024/10/07 21:47:45 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len;
    
    i = 0;
    src_len = ft_strlen(src);
    
    if (dstsize != 0)
    {
        while (i < dstsize - 1 && src[i] != '\0')
        {
            dst[i] = src [i];
            i++;
        }
        dst[i] = '\0';
    }
   
    return src_len; // コピーされた量に関わらず、srcの長さを返す
}