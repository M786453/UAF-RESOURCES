Include Irvine32.inc

;Author: shami
;Created: 14 JAN,2021
;Description: Display binary bits


.data

	source BYTE "This is the source string",0

	len = SIZEOF source

	target BYTE len DUP(0)

	

.code
main PROC

			mov esi, OFFSET source

			add esi, len - 2

			mov edi, OFFSET target

			mov ecx, len

			


			L1:
				
				push [esi]

				pop [edi]

				dec esi

				inc edi

			LOOP L1

				mov esi, OFFSET target

				mov ecx, SIZEOF target

				mov ebx, TYPE target

				call dumpmem


			

			

			exit

main endp

end main