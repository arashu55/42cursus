/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:51:43 by ashu              #+#    #+#             */
/*   Updated: 2024/10/07 22:20:24 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dst_len;
    size_t src_len;
    size_t i;

    dst_len = 0;
    src_len = ft_strlen(src);

    // dstの長さを取得
    while (dst_len < dstsize && dst[dst_len])
        dst_len++;

    // dstsizeが0またはdstの長さがdstsizeに達している場合、srcの長さを返す
    if (dst_len == dstsize)
        return (dstsize + src_len);

    // srcをdstにコピーする、バッファサイズを超えない範囲で
    i = 0;
    while (src[i] && (dst_len + i + 1) < dstsize)
    {
        dst[dst_len + i] = src[i];
        i++;
    }

    // 必要に応じてNUL終端
    if (dst_len + i < dstsize)
        dst[dst_len + i] = '\0';

    // 結果の長さを返す
    return (dst_len + src_len);
}
