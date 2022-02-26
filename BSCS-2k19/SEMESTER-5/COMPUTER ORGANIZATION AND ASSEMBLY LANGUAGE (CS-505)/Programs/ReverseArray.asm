Include Irvine32.inc

;Author: shami
;Created: 14 JAN,2021
;Description: Display binary bits


.data

	
	arr BYTE 1,2,3,4,5,6,7

	len = ($ - arr)
	

.code
main PROC

			mov esi, 0

			mov ecx, len/2

			mov ebx, len			


			L1:

				dec ebx

				mov al, arr[esi]

				xchg arr[ebx], al

				mov arr[esi], al 

				inc esi


			LOOP L1


			mov esi, offset arr

			mov ecx, len

			mov ebx, type arr

			call dumpmem
			
			exit

main endp

end main