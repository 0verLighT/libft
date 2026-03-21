/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syscall.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartel <amartel@student.42angouleme.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 02:03:03 by amartel           #+#    #+#             */
/*   Updated: 2026/03/21 02:03:26 by amartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SYSCALL_H
# define SYSCALL_H

# include <sys/types.h>
# include <stddef.h>

ssize_t	ft_write(unsigned int fd, const void *buf, size_t count);

#endif