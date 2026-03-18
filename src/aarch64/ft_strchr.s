.global _ft_strchr
.align 4

; char *ft_strchr(char *s, int c)
_ft_strchr:
.loop:
	ldrb w2, [x0]
	cmp w2, w1
	b.eq .found
	cbz x0, .not_found
	add x0, x0, #1
	b .loop
.found:
	ret
.not_found:
	mov x0, #0
	ret
