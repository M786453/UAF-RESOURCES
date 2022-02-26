Include Irvine32.inc

;Author: shami
;Created: 29Dec,2021
;Description: Rearranging the elements of array to : 3,1,2


.data

	var DWORD 1,2,3

.code
main PROC

	mov eax, var[0]		; copy first element of array to eax

	xchg eax, var[4]	; exchagne values of eax and array's second element

	xchg eax, var[8]	; exchange values of eax and array's third element

	mov var[0], eax		; mov value of eax to into first position of array

	mov eax, var[0]		; store first element of rearranged array in eax in order to print it

	call writeint		; print first element of rearranged array

	mov eax, var[4]		; store second element of rearranged array in eax in order to print it		

	call writeint

	mov eax, var[8]		; store third element of rearranged array in eax in order to print it

	call writeint

	exit
main endp
end main