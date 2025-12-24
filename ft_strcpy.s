; **************************************************************************** #
;                                                                              #
;                                                         :::      ::::::::    #
;    ft_strlen.s                                        :+:      :+:    :+:    #
;                                                     +:+ +:+         +:+      #
;    By: hiono <hiono@student.42.fr>                +#+  +:+       +#+         #
;                                                 +#+#+#+#+#+   +#+            #
;    Created: 2025/12/20 11:55:15 by hiono             #+#    #+#              #
;    Updated: 2025/12/20 11:55:15 by hiono            ###   ########.fr        #
;                                                                              #
; **************************************************************************** #

global	ft_strcpy

section .text

; rdi = dest
; rsi = src
ft_strcpy:
	xor rax, rax

_loop:
	cmp byte[rsi + rax], 0
	je _end_loop
	mov cl, byte[rsi + rax]
	mov byte[rdi + rax], cl
	inc rax
	jmp _loop

_end_loop:
	mov byte[rdi + rax], 0
	mov rax, rdi
	ret