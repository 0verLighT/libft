/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:57:20 by amartel           #+#    #+#             */
/*   Updated: 2025/10/15 15:44:41 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = (char *)s;
	while (!ptr[i])
	{
		if (ptr[i] == c)
		{
			j = i;
		}
		++i;
	}
	return (&ptr[j]);
}

int main(void) {
	char	*str;
	int		i;
	i = 0;
	str = strrchr("hello hello world world", 'o');
	printf("%s\n", str);
	return (0);
}
