Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Print even number usng Shift instruction


.data



.code
main PROC

	mov eax, 2

	L1:

	CALL writeint

	SHL eax, 1

	CMP eax, 100

	JLE L1		; If it is less than equal to 100 then jump


	exit

main endp
end main