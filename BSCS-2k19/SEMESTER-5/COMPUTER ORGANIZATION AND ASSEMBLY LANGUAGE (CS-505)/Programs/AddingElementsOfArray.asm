Include Irvine32.inc

;Author: shami
;Created: 29Dec,2021
;Description: Adding elements of array


.data

	var BYTE 1h,2h,3h

	sum BYTE ?

.code
main PROC

	mov eax, 0

	mov al, var

	add al, var[1]

	add al, var[2]

	call writeint


	exit
main endp
end main