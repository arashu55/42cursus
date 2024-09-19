/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:34:19 by ashu              #+#    #+#             */
/*   Updated: 2024/09/20 06:45:49 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t ft_countlen(int n)
{
    size_t len;

    len = 0;

    if (n == 0)
        return 1;
    if (n < 0)
        len++;
    while (n != 0)
    {
        n = n / 10;
        len++;
    }
    return len;
}

static char *ft_lengetmem(size_t len)
{
    
}

static void ft_memsetstr(int n)
{

}

char *ft_itoa(int n)
{

}