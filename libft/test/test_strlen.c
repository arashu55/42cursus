/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 00:58:17 by ashu              #+#    #+#             */
/*   Updated: 2024/09/10 01:13:32 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define RESET "\x1B[0m"

void test_function_name()
{
   printf("《ft_strlen.c》");
   printf("\n");
}

void test_strlen()
{
   // int tests[];
   // int i;
   // int num;
   // tests = {-10, -1, 0, ' ', '@', 'A', 'M', 'Z', '[', '`', 'a', 'm', 'z', '{', '}', 127, 128, 150}
   // i = 0;
   const char *tests[] = {
       "",                         // 空文字列
       "Hello, world!",             // 通常の文字列
       "1234567890",                // 数字
       "     ",                     // スペースのみ
       "Hello\tworld\n",            // 制御文字を含む
       "\0hidden",                  // NUL文字が最初
       "This is a longer string to test the length function.", // 長い文字列
   };
   int num;
   int i = 0;
   num = sizeof(tests) / sizeof(tests[0]);

   while (i != num)
   {
      int ft;
      int honke;  
      ft = ft_strlen(tests[i]);
      honke = strlen(tests[i]);

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
   test_strlen();
   return 0;
}
