/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:05:55 by ashu              #+#    #+#             */
/*   Updated: 2024/08/27 18:34:26 by ashu             ###   ########.fr       */
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
