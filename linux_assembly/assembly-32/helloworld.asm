; helloworld.asm
; 

global _start

; TEXT SECTION
section .text

; Identify the where the program entry point
_start:

    ; print the message
    mov eax, 0x4
    mov ebx, 0x1
    mov ecx, message
    mov edx, 0x20
    int 0x80		  

    ; exit successfully

    mov eax, 0x1
    mov ebx, 0x5
    int 0x80

; Data Section
section .data
    message: db "Welcome to Assembly Programming!"
