Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Clearing a register itself by XOR logical instruction


.data

	result BYTE ?

.code
main PROC

	mov eax, 5

	XOR eax, eax

	

	call dumpregs


		
	exit
main endp
end main