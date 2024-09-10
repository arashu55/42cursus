/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:47:19 by ashu              #+#    #+#             */
/*   Updated: 2024/09/10 14:25:06 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define SHADOW "\x1B[2m"
#define CYAN "\x1B[36m"
#define YEALLOW "\x1B[33m"
#define RESET "\x1B[0m"

void test_function_name()
{
   printf("《ft_bzero.c》");
   printf("\n");
}

void test_bzero()
{
   // int tests[];
   // int i;
   // int num;
   // tests = {-10, -1, 0, ' ', '@', 'A', 'M', 'Z', '[', '`', 'a', 'm', 'z', '{', '}', 127, 128, 150}
   // i = 0;
   const char *moji[] = {
    "This is a test string.",
    "Another test string."
    };

    const char *baka[] = {
    "This is a test string.",
    "Another test string."
    };

    struct{
    void *b;
    size_t len;
   } tests[] = {
    {(void *)moji[0], 5},
    {(void *)moji[1], 4},
   };

   struct{
    void *d;
    size_t lan;
   } test2[] = {
    {(void *)baka[0], 5},
    {(void *)baka[1], 4},
   };


   int num;
   int i = 0;
   num = sizeof(tests) / sizeof(tests[0]);

   while (i != num)
   {
      const char * ft;
      const char * honke;  
      ft_bzero(tests[i].b, tests[i].len);
      ft = moji[i];
      bzero(test2[i].d, test2[i].lan);
      honke = baka[i];

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

   i = 0;

   while (i != num)
   {
      const char * ft;
      const char * honke;  
      ft_bzero(tests[i].b, tests[i].len);
      ft = moji[i];
      bzero(test2[i].d, test2[i].lan);
      honke = baka[i];

      printf("【test%d】", i);
      if (ft == honke)
      {
         printf(SHADOW "libft is " RESET);
         printf(CYAN "%s" RESET,ft);
         printf(SHADOW "linux is " RESET);
         printf(CYAN "%s" RESET,honke);
      }
      else
      {
         printf(SHADOW "libft is " RESET);
         printf(CYAN "%s" RESET,ft);
         printf(SHADOW "linux is " RESET);
         printf(YEALLOW "%s" RESET,honke);
      }
      i++;
   }
   printf("\n");
   printf("\n");
}

int main() 
{
   test_function_name();
   test_bzero();
   return 0;
}
