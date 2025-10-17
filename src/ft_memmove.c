/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:13:15 by amartel           #+#    #+#             */
/*   Updated: 2025/10/17 13:56:47 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n) {
	char			*d;
	const char		*s;

	d = dest;
	s = src;
	if (dest > src)
		while (n--)
			d[n] = s[n];
	else
		ft_memcpy(d, s, n);
	return (d);
}