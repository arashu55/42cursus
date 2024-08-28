/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:57:29 by ashu              #+#    #+#             */
/*   Updated: 2024/08/28 21:05:45 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

#define GREEN "\x1B[32m"
#define RED "\x1B[31m"
#define RESET "\x1B[0m"
// #define WHITE "\x1B[38m"

// void test_isalpha()
// {
//    int tests[] = {}
// }

int main() {
    printf(WHITE "This text is green.\n" RESET);
    printf(RED "This text is red.\n" RESET);
    printf("This text is the default color.\n");
    return 0;
}

