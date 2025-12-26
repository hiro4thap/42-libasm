; **************************************************************************** #
;                                                                              #
;                                                         :::      ::::::::    #
;    ft_write.s                                         :+:      :+:    :+:    #
;                                                     +:+ +:+         +:+      #
;    By: hiono <hiono@student.42.fr>                +#+  +:+       +#+         #
;                                                 +#+#+#+#+#+   +#+            #
;    Created: 2025/12/24 23:52:36 by hiono             #+#    #+#              #
;    Updated: 2025/12/24 23:52:37 by hiono            ###   ########.fr        #
;                                                                              #
; **************************************************************************** #

global	ft_write

extern __errno_location

section .text

;rdi = fd
;rsi = buf
;rdx = count
ft_write:
    mov rax, 1
    syscall
    cmp rax, 0
    jl .error
    ret

.error:
    neg rax
    mov edx, eax
    call __errno_location
    mov dword[rax], edx
    mov rax, -1
    ret