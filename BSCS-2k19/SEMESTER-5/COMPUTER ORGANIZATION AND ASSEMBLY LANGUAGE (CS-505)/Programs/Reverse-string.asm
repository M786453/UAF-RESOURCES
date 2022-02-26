Include Irvine32.inc

;Author: shami
;Created: 23Dec,2021



.data

	source BYTE "This is the source string",0
	target BYTE SIZEOF source DUP('#')

.code
main proc
	

	mov esi, offset source

	add esi, SIZEOF source

	sub esi, 2

	mov edi, offset target

	mov ecx, SIZEOF source

	rev:
		mov al, [esi]

		mov [edi], al

		dec esi
		inc edi

		LOOP rev

		mov edx, offset target

		call writestring


	exit
main endp
end main