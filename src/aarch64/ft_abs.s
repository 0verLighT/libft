.global _ft_abs
.align 4

; int ft_abs(int v)
_ft_abs:
	neg w1, w0				; tmp w0 in w1 and negative w1
	cmp w0, #0				; cmp if w0 lower than 0
	csel w0, w1, w0, lt		; mov w1 or w0 on depend cmp above result
	ret
