Include Irvine32.inc

;Author: Mask
;Created: 10Dec,2021
;Description:Evaluating the expression -> Rval = Xval - (-Yval + Zval)


.data

Rval DWORD ?
Xval DWORD 26
YVal DWORD 30
ZVal DWORD 40

.code
main proc
									;--------Evaluation----------
	mov eax, Xval					;		eax = 26
	mov ebx, YVal					;		ebx = 30	
	neg ebx							;		ebx = -30
	add ebx, Zval					;		ebx = 10  --> -Yval + Zval
	neg ebx							;		ebx = -10
	add eax, ebx					;		eax - ebx = +16


	call WriteInt

	exit
main endp
end main