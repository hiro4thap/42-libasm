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

global	ft_strlen

section .text

ft_strlen:
	mov rax, -1

_loop:
	inc rax
	cmp byte[rdi + rax], 0
	jne _loop

_return:
	ret
