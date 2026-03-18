.global _ft_strlen
.align 4

; size_t ft_strlen(char *s)
_ft_strlen:
	mov x1, #0
.loop:
	ldrb w2, [x0, x1]
	cmp w2, #0
	b.eq .done
	add	x1, x1, #1
	b .loop
.done:
	mov x0, x1
	ret
