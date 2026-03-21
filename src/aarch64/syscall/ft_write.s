.global _ft_write
.align 4

; ssize_t ft_write(unsigned int fd, const void *buf, size_t count)
; syscall macos (need define __apple__ and linux)
_ft_write:
	mov x16, 4
	svc #0x80
	ret
