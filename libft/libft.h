/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 02:51:41 by ashu              #+#    #+#             */
/*   Updated: 2024/09/13 07:02:42 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <limits.h>

int ft_isupper(int c);
int ft_islower(int c);
int	ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
int ft_atoi(const char *str);

#endif