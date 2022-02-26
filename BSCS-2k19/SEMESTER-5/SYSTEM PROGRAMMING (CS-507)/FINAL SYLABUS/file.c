#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("program.txt","r");

   if(fptr == NULL)
   {
      printf("Error!");
      getchar();   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

	getchar();

   return 0;
}