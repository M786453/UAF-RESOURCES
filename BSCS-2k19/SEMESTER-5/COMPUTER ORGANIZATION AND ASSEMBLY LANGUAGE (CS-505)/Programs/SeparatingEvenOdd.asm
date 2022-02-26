Include Irvine32.inc

;Author: shami
;Created: 14 JAN,2021
;Description: LAB-7 [Separating Even Odd Numbers]


.data

		msg BYTE "Enter your value: ",0

		ev BYTE "E",0

		od BYTE "O",0

.code
main PROC

		mov edx, OFFSET msg

		call writestring

		call ReadInt

		mov ecx, eax

		AND eax, 01h

		mov edx, OFFSET ev

		JZ write

		mov edx, OFFSET od


		write:
				L1:

					call writestring

				LOOP L1
			
			
		exit

main endp

end main