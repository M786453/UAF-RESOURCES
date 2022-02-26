Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Check whether a number in register is even or odd by using TEST instruction


.data

	odd_msg BYTE "ODD NUMBER",0

	even_msg BYTE "EVEN NUMBER",0

.code
main PROC

	mov eax, 8

	TEST eax, 1

	JZ evnn

	mov edx, offset odd_msg

	call writestring

	jmp outprog


	evnn:
		mov edx, offset even_msg

		call writestring


	outprog:
			exit

main endp
end main