/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:35:37 by ashu              #+#    #+#             */
/*   Updated: 2024/06/06 09:46:13 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return(1);
    }
    return(0);
}

#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("%d\n", ft_islower('a'));
    printf("%d\n", ft_islower('A'));
    printf("%d\n", islower('a'));
    printf("%d\n", islower('A'));
}