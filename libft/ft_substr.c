/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 06:26:11 by ashu              #+#    #+#             */
/*   Updated: 2024/10/08 18:59:05 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t s_len;

    if (!s)
        return (NULL);

    s_len = ft_strlen(s);

    // startがsの長さを超えた場合、空文字列を返す
    if (start >= s_len)
        return (ft_calloc(1, 1));

    // lenがsの残りの長さよりも大きい場合、残りの長さに調整
    if (len > s_len - start)
        len = s_len - start;

    // メモリの確保と初期化
    ptr = (char *)ft_calloc(len + 1, sizeof(char));
    if (!ptr)
        return (NULL);

    // strlcpyで部分文字列をコピー
    ft_strlcpy(ptr, s + start, len + 1);

    return ptr;
}
