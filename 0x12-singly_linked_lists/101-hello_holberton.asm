section .data
	message db 'Hello, Holberton', 0    format db '%s', 10, 0    ; '%s' - placeholder for string, 10 - newline character, 0 - null terminator

section .text
	extern printf            ; Declare the printf function from the C library

global _start
_start:
	mov rdi, message        ; Load the address of the message into rdi
	mov rax, 0              ; Clear rax register (variadic function, no SSE)
	call printf             ; Call printf function
	mov eax, 60             ; syscall number for exi
	xor edi, edi            ; status 0
	syscall                 ; exit program
