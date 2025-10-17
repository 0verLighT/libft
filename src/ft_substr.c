/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:32:03 by amartel           #+#    #+#             */
/*   Updated: 2025/10/16 23:32:05 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len) {
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	sub[len] = '\0';
	while (i < len) {
		sub[i] = s[start];
		start++;
		i++;
	}
	return (sub);
}