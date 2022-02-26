Include Irvine32.inc

;Author: shami
;Created: 14 JAN,2021
;Description: Display binary bits


.data

		arr BYTE 32 DUP(0),0

.code
main PROC

		
		mov eax, 32

		mov esi, OFFSET arr

		mov ecx, 32

		L1:
			
			SHL eax, 1

			mov BYTE PTR [esi], '0'

			jnc L2

			mov BYTE PTR [esi], '1'

		L2:
			inc esi
			LOOP L1
		

		mov edx, OFFSET arr

		call writestring
		
		
		exit
main endp




end main