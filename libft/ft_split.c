/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashu <ashu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:59:20 by ashu              #+#    #+#             */
/*   Updated: 2024/09/19 16:09:49 by ashu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_countlen(const char *str, char delim, size_t *length)
{
    size_t word_count;
    size_t i;
    size_t word_len;

    word_count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == delim)
        {
            i++;
        }
        else
        {
            word_len = 0;
            while (str[i] != delim)
            {
                word_len++;
                i++;
            }

            lengths[word_count] = word_len;
            word_count++;
        }
    }
}

char **split(const char *str, const char *delim)
{
    
}
