/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_isupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 11:19:41 by ashu              #+#    #+#             */
/*   Updated: 2024/06/06 09:23:31 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isupper(int c)
{
    if ('A' <= c && c <= 'Z')
    {
        return(c);
    }
    return(0);
}

#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("%d\n", ft_isupper('A'));
    printf("%d\n", ft_isupper('a'));
    printf("%d\n", isupper('A'));
    printf("%d\n", isupper('a'));
}