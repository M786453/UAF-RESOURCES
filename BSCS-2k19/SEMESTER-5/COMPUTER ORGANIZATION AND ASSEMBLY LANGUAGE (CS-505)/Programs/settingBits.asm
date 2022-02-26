Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: SETTING BITS OF A GIVEN NUMBER


.data

	

.code
main PROC

	mov eax, 000111011h

	OR eax, 01111h

	call dumpregs

		
	exit
main endp
end main