global ft_write

; ssize_t ft_write(unsigned int fd, const void *buf, size_t count)
ft_write:
	mov rax, 1
	syscall
	ret

