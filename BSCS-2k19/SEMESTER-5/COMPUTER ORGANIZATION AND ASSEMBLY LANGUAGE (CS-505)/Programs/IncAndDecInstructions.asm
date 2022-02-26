Include Irvine32.inc

.data

myByte BYTE 0FFh,0

.code
main proc

	mov al, myByte

	

	mov ah, myByte + 1

	dec ah

	inc al

	dec ax

	call WriteHex

	exit
main endp
end main