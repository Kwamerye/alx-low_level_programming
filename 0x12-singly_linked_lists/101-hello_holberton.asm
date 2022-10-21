; File: 101-hello_holberton.asm
; Auth: Richard Dzadey
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

section .data
   msg: db "Hello, Holberton", 0
   fmt: db "%s", 10, 0

section .text
   extern printf
   global main

main:
   mov edi, fmt
   mov esi, msg
   mov eax, 0
   call printf

   mov eax, 0
   ret
