global ft_strlen

; size_t ft_strlen(char *s)
ft_strlen:
	mov rax, 0
.loop:
	cmp byte [rdi + rax], 0
	je .done
	inc rax
	jmp .loop
.done:
	ret
