Include Irvine32.inc

;Author: shami
;Created: 29Dec,2021
;Description: Clearing all bits of a given number


.data


.code
main PROC

	mov eax, 0FFFFFFFFh

	AND eax, 0h		; clearing bits present in eax

	call dumpregs
		
	exit
main endp
end main