/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:57:29 by ashu              #+#    #+#             */
/*   Updated: 2024/08/27 19:25:09 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>
int main()
{
   printf("%d\n", ft_isalpha(-10));
   printf("%d\n", ft_isalpha(-1));
   printf("%d\n", ft_isalpha(0));
   printf("%d\n", ft_isalpha(' '));
   printf("%d\n", ft_isalpha('@'));
   printf("%d\n", ft_isalpha('A'));
   printf("%d\n", ft_isalpha('M'));
   printf("%d\n", ft_isalpha('Z'));
   printf("%d\n", ft_isalpha('['));
   printf("%d\n", ft_isalpha('`'));
   printf("%d\n", ft_isalpha('a'));
   printf("%d\n", ft_isalpha('m'));
   printf("%d\n", ft_isalpha('z'));
   printf("%d\n", ft_isalpha('{'));
   printf("%d\n", ft_isalpha('}'));
   printf("%d\n", ft_isalpha(127));
   printf("%d\n", ft_isalpha(128));
   printf("%d\n", ft_isalpha(150));

   printf("%d\n", isalpha(-10));
   printf("%d\n", isalpha(-1));
   printf("%d\n", isalpha(0));
   printf("%d\n", isalpha(' '));
   printf("%d\n", isalpha('@'));
   printf("%d\n", isalpha('A'));
   printf("%d\n", isalpha('M'));
   printf("%d\n", isalpha('Z'));
   printf("%d\n", isalpha('['));
   printf("%d\n", isalpha('`'));
   printf("%d\n", isalpha('a'));
   printf("%d\n", isalpha('m'));
   printf("%d\n", isalpha('z'));
   printf("%d\n", isalpha('{'));
   printf("%d\n", isalpha('}'));
   printf("%d\n", isalpha(127));
   printf("%d\n", isalpha(128));
   printf("%d\n", isalpha(150));
}