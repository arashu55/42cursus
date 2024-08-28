/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 03:44:36 by ashu              #+#    #+#             */
/*   Updated: 2024/08/29 04:43:23 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define RESET "\x1B[0m"

void test_function_name()
{
   printf("《ft_isalnum.c》");
   printf("\n");
}

void test_isalnum()
{
   // int tests[];
   // int i;
   // int num;
   // tests = {-10, -1, 0, ' ', '@', 'A', 'M', 'Z', '[', '`', 'a', 'm', 'z', '{', '}', 127, 128, 150}
   // i = 0;
   int tests[] = {
    // 全ての数字
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',

    // アルファベットの大文字
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 
    'U', 'V', 'W', 'X', 'Y', 'Z',

    // アルファベットの小文字
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
    'u', 'v', 'w', 'x', 'y', 'z',

    // 境界値および非アルファベット/非数字の文字
    '-', ' ', '/', ':', '@', '[', '`', '{',

    // 制御文字
    '\n', '\t', '\r',

    // 一般的な非アルファベット/非数字のシンボル
    '!', '#', '%', '&', '*', '+', '=', '_', '(', ')',

    // 負の値
    -128, -1, 

    // 拡張ASCIIや境界値
    127, 128, 150, 255
    };

   int num;
   int i = 0;
   num = sizeof(tests) / sizeof(tests[0]);

   while (i != num)
   {
      int ft;
      int honke;  
      ft = ft_isalnum(tests[i]);
      honke = isalnum(tests[i]);

      printf("【test%d】", i);
      if (ft == honke)
      {
         printf(GREEN "OK " RESET);
      }
      else
      {
         printf(RED "FAILED " RESET);
      }
      i++;
   }
   printf("\n");
   printf("\n");
}

int main() 
{
   test_function_name();
   test_isalnum();
   return 0;
}
