Include Irvine32.inc

;Author: shami
;Created: 29Dec,2021
;Description: CHECKING WETHER A NUMBER IS ODD OR EVEN

.data

	ev BYTE "THE NUMBER IS EVEN",0
	od BYTE "THE NUMBER IS ODD",0

.code
main PROC

		mov eax, 6

		AND eax, 01H

		mov edx, OFFSET ev

		JZ outprog

		mov edx, OFFSET od


		outprog:

			call writestring

			exit

main endp




end main