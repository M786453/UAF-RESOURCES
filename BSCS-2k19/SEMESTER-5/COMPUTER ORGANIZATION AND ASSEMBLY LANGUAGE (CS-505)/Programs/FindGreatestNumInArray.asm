Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Print max number among given array of numbers


.data

	arr DWORD 11,999,101

	max DWORD ?

	len equ LENGTHOF arr

.code
main PROC

	
	mov eax, arr[0]

	mov esi, offset arr

	mov ecx, len


	;Loop through elements of array in order to find greatest number
	L1:
		
		CMP eax, [esi]

		JL swap

		return:
			add esi, 4

		LOOP L1


		jmp outprog




		; mov the greater value in eax register and return to current loop
		swap:
			mov eax, [esi]
			JMP return


		;Print greatest number among array elements and exit the program
		outprog:
			call writeint
			exit


main endp


end main