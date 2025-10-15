/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 21:10:49 by amartel           #+#    #+#             */
/*   Updated: 2025/10/15 09:39:52 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char		*ptr;
	size_t		i;

	ptr = (char *)s;
	i = 0;
	while (i < n)
		ptr[i++] = (char)c;
	return (ptr);
}
