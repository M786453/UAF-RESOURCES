Include Irvine32.inc

;Author: shami
;Created: 29Dec,2021
;Description: CALCULATING SIZE OF AN ARRAY



continueMsg TEXTEQU <"Do you wish to continue (Y/N)?">
rowSize = 5

.data

	prompt1 BYTE continueMsg
	count TEXTEQU <rowSize * 1> ; evaluates the expression
	setupAL TEXTEQU <mov al,count>

.code
main proc

	

	setupAL		; generates: "mov al,10"

	call dumpregs


	exit
main endp
end main