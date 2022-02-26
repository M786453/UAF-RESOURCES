Include Irvine32.inc

;Author: shami
;Created: 4 JAN,2021
;Description: Print complete ASCII character set


.data

	string BYTE ?

.code
main PROC

		call display
		
		exit
main endp

	
		;Procedure to print complete ASCII character set
		display:

			mov al, 1

			mov ecx, 256

			L1:
				mov string,al
	
				mov edx, offset string
			
				call writestring

				inc al

			LOOP L1

		ret


end main