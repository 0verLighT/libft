/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:13:41 by amartel           #+#    #+#             */
/*   Updated: 2025/10/15 09:46:55 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t	i;
    size_t	j;
    size_t	lensrc;
    size_t	lendst;

    lensrc = ft_strlen(src);
    lendst = ft_strlen(dst);

    if ( dstsize <= lendst)
        return (dstsize + lensrc);
    i = 0;
    j = lendst;
    while (src[i] && dstsize - lendst - 1 > 1) {

        dst[lendst] = src[i];

        j++;

        i++;

    }
    dest[j] = '/0';
    return (lendst + lensrc);
}
