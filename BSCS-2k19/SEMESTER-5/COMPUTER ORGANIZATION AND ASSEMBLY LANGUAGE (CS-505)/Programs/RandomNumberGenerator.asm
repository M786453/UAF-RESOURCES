Include Irvine32.inc

;Author: shami
;Created: 14 JAN,2021
;Description: Random Number Generator


.data

	low_bound = 50

	high_bound = 49

	space BYTE " ",0

	newline BYTE 0dh,0ah,0

	u_arr BYTE 10 DUP(0)

.code
main PROC


			call RAND_U

			call NewLn

			call NewLn

			call RAND_S

			call NewLn
			
			exit

main endp


	; Generate random 10 unsigned numbers

	RAND_U PROC

		call Randomize			; initialize random starting seed value of RandomRange	

		mov ecx, 10

		L1:
	
			mov eax, 4294967294		; set range	

			call RandomRange		; generate random number

			call writedec

			call WrtSpc

		LOOP L1

		RET
	RAND_U ENDP





	; Generate Random Signed Numbers

	RAND_S PROC

		call Randomize

		mov ecx, 10

		L1:

			mov eax, low_bound + high_bound

			call RandomRange

			sub eax, low_bound

			call writeint

			call WrtSpc

		 LOOP L1


		RET
	RAND_S ENDP





	; Write Space

	WrtSpc PROC


		mov edx, offset space

		call writestring


		RET
	WrtSpc ENDP





	; New Line

	NewLn PROC

		mov edx, offset newline

		call writestring

		RET
	NewLn ENDP




end main