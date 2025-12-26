; **************************************************************************** #
;                                                                              #
;                                                         :::      ::::::::    #
;    ft_strdup.s                                        :+:      :+:    :+:    #
;                                                     +:+ +:+         +:+      #
;    By: hiono <hiono@student.42.fr>                +#+  +:+       +#+         #
;                                                 +#+#+#+#+#+   +#+            #
;    Created: 2025/12/24 23:52:36 by hiono             #+#    #+#              #
;    Updated: 2025/12/24 23:52:37 by hiono            ###   ########.fr        #
;                                                                              #
; **************************************************************************** #

global	ft_strdup

extern malloc
extern ft_strlen
extern ft_strcpy

section .text

;rdi = s
ft_strdup:
    push rdi
    call ft_strlen
    inc rax
    mov rdi, rax
    call malloc wrt ..plt
    mov rdi, rax
    pop rsi
    call ft_strcpy
    ret