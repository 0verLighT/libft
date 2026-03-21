#ifndef SYSCALL_H
#define SYSCALL_H

#include <sys/types.h>
#include <stddef.h>

ssize_t	ft_write(unsigned int fd, const void *buf, size_t count);

#endif