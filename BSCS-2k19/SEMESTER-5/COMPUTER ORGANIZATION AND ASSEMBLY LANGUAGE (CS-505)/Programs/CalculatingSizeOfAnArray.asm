Include Irvine32.inc

;Author: shami
;Created: 27Dec,2021
;Description: CALCULATING SIZE OF AN ARRAY


.data

  s WORD 25 DUP("#")
  sz = ($ - s)/2

.code
main proc

	

	mov eax, sz

	call writeInt


	exit
main endp
end main