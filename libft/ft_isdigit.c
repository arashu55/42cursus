/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:05:55 by ashu              #+#    #+#             */
/*   Updated: 2024/06/06 16:16:14 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return(1);
    }
    return(0);
}

#include <ctype.h>
#include <stdio.h>

int main()
{
    printf("%d\n", ft_isdigit('0'));
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", isdigit('0'));
    printf("%d\n", isdigit('a'));
}