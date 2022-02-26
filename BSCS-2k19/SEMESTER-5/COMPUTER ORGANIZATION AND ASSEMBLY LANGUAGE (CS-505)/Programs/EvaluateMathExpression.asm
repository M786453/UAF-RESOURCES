Include Irvine32.inc

.data

Rval DWORD ?
Xval DWORD 26
YVal DWORD 30
ZVal DWORD 40

.code
main proc
	
	mov eax, Xval

	neg eax

	mov ebx, YVal
	sub ebx, ZVal

	add eax, ebx

	mov Rval, eax

	call WriteInt

	exit
main endp
end main