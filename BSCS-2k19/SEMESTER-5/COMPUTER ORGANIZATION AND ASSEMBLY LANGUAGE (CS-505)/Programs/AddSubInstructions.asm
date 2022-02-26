Include Irvine32.inc

.data

var1 DWORD 10000h
var2 DWORD 20000h

.code
main proc
									;------EAX VALUES-------
	mov eax, var1					;		00010000h
	add eax, var2					;		00020000h
	add ax, 0FFFFh					;		0003FFFFh
	add eax, 1						;		00040000h
	sub ax,  1						;		0004FFFFh

	call WriteHex

	exit
main endp
end main