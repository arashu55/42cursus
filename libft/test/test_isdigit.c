/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:26:44 by ashu              #+#    #+#             */
/*   Updated: 2024/08/27 19:25:14 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

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