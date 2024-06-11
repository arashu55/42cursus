/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:05:55 by ashu              #+#    #+#             */
/*   Updated: 2024/06/06 16:36:23 by ashu             ###   ########.fr       */
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
    int i;
    i = 0;
    while (i != 127)
    {
        printf("original %d is %d\n", i, ft_isdigit(i));
        printf("my %d is %d\n" , i, isdigit(i));
        i++;
    }
    printf("%d\n", ft_isdigit('0'));
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", isdigit('0'));
    printf("%d\n", isdigit('a'));
}