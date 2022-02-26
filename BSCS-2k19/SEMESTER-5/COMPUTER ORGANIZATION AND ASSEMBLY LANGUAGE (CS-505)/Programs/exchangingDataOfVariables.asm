Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Print complete ASCII character set


.data

	var BYTE 20h
	var1 BYTE 30h

	; always use strign terminator otherwise you may get unexpected results

	msg BYTE "Value of var: ",0
	new_line BYTE 0dh,0ah,0
	msg1 BYTE "Value of var1: ",0

.code
main PROC
		
		
		; exchanging data

		mov eax, 0

		mov al, var
		XCHG al, var1
		mov var, al


		; printing msg for var

		mov edx, offset msg

		call writestring

		call writehex



		; printing a new line

		mov edx, offset new_line

		call writestring




		; printing msg for var1

		mov edx, offset msg1

		call writestring

		mov al, var1

		call writehex
		
		
		exit
main endp




end main