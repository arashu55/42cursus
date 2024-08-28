/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:26:44 by ashu              #+#    #+#             */
/*   Updated: 2024/08/29 04:44:22 by ashu             ###   ########.fr       */
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
   printf("《ft_isdigit.c》");
   printf("\n");
}

void test_isdigit()
{
   // int tests[];
   // int i;
   // int num;
   // tests = {-10, -1, 0, ' ', '@', 'A', 'M', 'Z', '[', '`', 'a', 'm', 'z', '{', '}', 127, 128, 150}
   // i = 0;
   int tests[] = {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',  // 全ての数字
        'A', '-', ' ', '/', ':',                           // 非数字文字と境界
        '\n', '\t', '\r',                                  // 制御文字
        '!', '#', '%', '_',                                // よく使う非数字のシンボル
        -128, -1,                                          // 負の値
        127, 128, 150, 255                                 // 拡張ASCIIや境界値
    };
   int num;
   int i = 0;
   num = sizeof(tests) / sizeof(tests[0]);

   while (i != num)
   {
      int ft;
      int honke;  
      ft = ft_isdigit(tests[i]);
      honke = isdigit(tests[i]);

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
   test_isdigit();
   return 0;
}
