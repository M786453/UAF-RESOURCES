Include Irvine32.inc

.data

arr1 DB 80h,66h,05h

.code
main proc

	movzx ax, arr1				; mov first element of arr1 to ax register using zero extension mov

	mov bl, arr1 + 1			; mov second element of arr1 to bl

	add ax, bx					; add ax and bx registers

	mov bl, arr1 + 2			; mov third element of arr1 to bl

	add ax, bx					; add ax and bx registers

	call dumpregs


	exit
main endp
end main