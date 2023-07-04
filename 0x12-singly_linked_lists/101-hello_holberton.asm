SECTION .data
msg:	db "Hello, Holberton", 0  ; Null-terminated string for message
fmt:	db "%s", 10, 0           ; Format specifier for printf

SECTION .text
	extern printf  ; External reference to the printf function
	global main    ; Declaring main as global for linker
main:
	mov esi, msg   ; Moving the message string to source index
	mov edi, fmt   ; Moving the format string to destination index
	mov eax, 0     ; Preparing the return value in EAX
	call printf    ; Calling the printf function

	mov eax, 0     ; Setting return value to 0
	ret            ; Returning to caller
