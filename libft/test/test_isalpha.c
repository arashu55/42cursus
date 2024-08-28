/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:57:29 by ashu              #+#    #+#             */
/*   Updated: 2024/08/28 23:10:05 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

#define RED "\x1B[31m"
#define ORANGE "\x1B[33m"
#define YELLOW "\x1B[93m"
#define GREEN "\x1B[32m"
#define BLUE "\x1B[34m"
#define INDIGO "\x1B[35m"
#define VIOLET "\x1B[95m"
#define RESET "\x1B[0m"

void display_banner() 
{
    printf(RED "          :::        ::::::::       :::    :::      :::    :::    :::::::::::       ::::::::::       ::::::::   :::::::::::       ::::::::::       :::::::::\n" RESET);
    printf(ORANGE "       :+: :+:     :+:    :+:      :+:    :+:      :+:    :+:        :+:           :+:             :+:    :+:      :+:           :+:              :+:    :+:\n" RESET);
    printf(YELLOW "     +:+   +:+    +:+             +:+    +:+      +:+    +:+        +:+           +:+             +:+             +:+           +:+              +:+    +:+\n" RESET);
    printf(GREEN "   +#++:++#++:   +#++:++#++      +#++:++#++      +#+    +:+        +#+           +#++:++#        +#++:++#++      +#+           +#++:++#         +#++:++#:\n" RESET);
    printf(BLUE "  +#+     +#+          +#+      +#+    +#+      +#+    +#+        +#+           +#+                    +#+      +#+           +#+              +#+    +#+\n" RESET);
    printf(INDIGO " #+#     #+#   #+#    #+#      #+#    #+#      #+#    #+#        #+#           #+#             #+#    #+#      #+#           #+#              #+#    #+#\n" RESET);
    printf(VIOLET "###     ###    ########       ###    ###       ########         ###           ##########       ########       ###           ##########       ###    ###\n" RESET);
    printf("\n");
    printf("\n");
}

void test_function_name()
{
   printf("《ft_isalpha.c》");
   printf("\n");
}

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

      printf("【test%d】", i);
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
   printf("\n");
   printf("\n");
   printf("\n");
}

int main() {
   display_banner();
   test_function_name();
   test_isalpha();
   return 0;
}

