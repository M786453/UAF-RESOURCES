Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Reverse bits of a number


.data

.code
main PROC

	mov eax, 000F0F0F0h

	NOT eax

	call dumpregs
	
	exit

main endp
end main