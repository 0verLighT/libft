/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:59:04 by amartel           #+#    #+#             */
/*   Updated: 2025/10/15 10:07:35 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t size)
{
	int			i;
	size_t		j;
	char		*str;

	str = (char *)big;
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == little[0])
		{
			while (little[j] && str[i + j] == little[j])
			{
				j++;
				if (j == size)
					return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}
