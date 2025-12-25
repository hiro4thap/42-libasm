; **************************************************************************** #
;                                                                              #
;                                                         :::      ::::::::    #
;    ft_strcmp.s                                        :+:      :+:    :+:    #
;                                                     +:+ +:+         +:+      #
;    By: hiono <hiono@student.42.fr>                +#+  +:+       +#+         #
;                                                 +#+#+#+#+#+   +#+            #
;    Created: 2025/12/24 23:52:36 by hiono             #+#    #+#              #
;    Updated: 2025/12/24 23:52:37 by hiono            ###   ########.fr        #
;                                                                              #
; **************************************************************************** #

global	ft_strcmp

section .text

;rdi = s1
;rsi = s2
ft_strcmp:
    xor rax, rax

_loop:
    movzx rcx, byte[rdi + rax]
    movzx rdx, byte[rsi + rax]
    cmp rcx, 0
    je _end_loop
    cmp rdx, 0
    je _end_loop
    cmp rcx, rdx
    jne _end_loop
    inc rax
    jmp _loop

_end_loop:
    sub rcx, rdx
    mov rax, rcx 
    ret