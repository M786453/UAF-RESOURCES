Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Conditional Jump Using CMP instruction


.data

	msg BYTE "HELLO, WORLD!",0dh,0ah

.code
main PROC

	mov eax, 0

	L1:

	MOV edx, offset msg

	CALL writestring
	
	INC eax

	CMP eax, 10

	JLE L1		; If it is less than equal to 10 then jump


	exit

main endp
end main