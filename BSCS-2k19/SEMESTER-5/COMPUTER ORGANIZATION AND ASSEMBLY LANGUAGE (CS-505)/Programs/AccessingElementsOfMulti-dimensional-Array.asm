Include Irvine32.inc

;Author: shami
;Created: 14 JAN,2021
;Description: Accessing Multi-dimensional Arrays


.data

	arr DB 10h, 20h, 30h
	r_size = ($ - arr)	;size of row
		DB 40h, 50h, 60h
		DB 70h, 80h, 90h

.code
main PROC

		r_ind = 0
		c_ind = 1

		MOV EBX, OFFSET arr
		ADD EBX, r_size * r_ind
		MOV ESI, c_ind
		MOV AL, [EBX + ESI]
		

		call dumpregs
		
		exit
main endp




end main