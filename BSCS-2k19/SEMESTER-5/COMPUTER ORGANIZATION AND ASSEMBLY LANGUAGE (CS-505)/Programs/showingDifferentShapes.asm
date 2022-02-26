Include Irvine32.inc

;Author: shami
;Created: 14 JAN,2021
;Description: LAB-7 [Working With Different Shapes]


.data

		msg BYTE "Enter the input: ",0

		spaceCount DWORD ?

		starCount DWORD ?

		count DWORD ?

		star BYTE '*'

		space BYTE ' '

		new_ln BYTE 0DH,0AH,0

.code
main PROC

		call GET_INPUT

		call SHOW_SHAPES

			
		exit

main endp



	; Get Input From User

	GET_INPUT PROC

		mov edx, OFFSET msg

		call writestring

		call readint

		RET
	GET_INPUT ENDP



	; Show Shapes

	SHOW_SHAPES PROC

		mov ecx, eax					; store user input in ecx

		mov starCount, ecx
	
		L1:

			mov count, ecx				; storing ecx in count ( i.e. loop counter) for loop L1

			mov spaceCount, ecx			; storing ecx in spaceCount			
			
			mov ecx, starCount			; storing starCount in ecx ( i.e. loop counter) for loop L2 (starCount is always equal to user input)

			L2:

					mov al, space

					cmp spaceCount, ecx 

					JB w				; write space if spaceCount is bellow than L2 Loop counter

					mov al, star


				w:
					call writechar


			LOOP L2			

			mov ecx, count

			call NEW_LINE
		
		LOOP  L1

		RET
	SHOW_SHAPES ENDP


	; NEW LINE PROCEDURE

	NEW_LINE PROC

		mov edx, OFFSET new_ln

		call writestring

		RET
	NEW_LINE ENDP


end main