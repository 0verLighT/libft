/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:16:32 by amartel           #+#    #+#             */
/*   Updated: 2025/10/14 21:17:22 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char    *ft_strchr(const char *s, int c)
{
    char	*ptr;
    ptr = (char *)s;

    while (*ptr)
    {
        if (*ptr == c)
            return (ptr);
       ++ptr;
    }
    return ("\0");
}
