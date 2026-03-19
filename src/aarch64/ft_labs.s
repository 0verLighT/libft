.global _ft_labs
.align 4

; long ft_abs(long v)
_ft_labs:
	neg x1, x0				; tmp x0 in x1 and negative w1
	cmp x0, #0				; cmp if x0 lower than 0
	csel x0, x1, x0, lt		; mov x1 or x0 on depend cmp above result
	ret
