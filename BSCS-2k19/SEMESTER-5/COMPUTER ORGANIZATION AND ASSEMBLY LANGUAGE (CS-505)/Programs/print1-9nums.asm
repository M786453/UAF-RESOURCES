Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Print 1-9 numbers


.data

	

.code
main PROC


		mov eax, 1

		call print_nums
		
			exit


main endp

	
		print_nums:
			L1:
				call writeint

				inc eax

				cmp eax, 9

				JLE L1

		ret


end main