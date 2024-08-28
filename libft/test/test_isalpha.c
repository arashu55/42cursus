/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:57:29 by ashu              #+#    #+#             */
/*   Updated: 2024/08/28 22:46:17 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

#define GREEN "\x1B[32m"
#define RED "\x1B[31m"
#define RESET "\x1B[0m"
// #define WHITE "\x1B[38m"

void test_isalpha()
{
   // int tests[];
   // int i;
   // int num;
   // tests = {-10, -1, 0, ' ', '@', 'A', 'M', 'Z', '[', '`', 'a', 'm', 'z', '{', '}', 127, 128, 150}
   // i = 0;
   int tests[] = {-10, -1, 0, ' ', '@', 'A', 'M', 'Z', '[', '`', 'a', 'm', 'z', '{', '}', 127, 128, 150};
   int num;
   int i = 0;
   num = sizeof(tests) / sizeof(tests[0]);

   while (i != num)
   {
      int ft;
      int honke;  
      ft = ft_isalpha(tests[i]);
      honke = isalpha(tests[i]);

      if (ft == honke)
      {
         printf(GREEN "OK " RESET);
      }
      else
      {
         printf(RED "FAIELD " RESET);
      }
      i++;
   }
}

int main() {
   printf(GREEN "This text is green.\n" RESET);
   printf(RED "This text is red.\n" RESET);
   printf("This text is the default color.\n");
   test_isalpha();
   return 0;
}

