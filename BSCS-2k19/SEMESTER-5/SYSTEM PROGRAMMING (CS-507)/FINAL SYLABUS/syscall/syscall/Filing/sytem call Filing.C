     #include<stdio.h> 
#include<fcntl.h> 
#include<errno.h> 
extern int errno; 
int main() 
{      
    // if file does not have in directory  
    // then file foo.txt is created. 

    int fd = open("foo.txt", O_RDONLY | O_CREAT);  
      
    printf("fd = %d \n", fd); 
      
    if (fd ==-1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d \n ", errno);  
          
        // print program detail "Success or failure" 
        perror("Reason of Error in Porgram ");                  
    } 
    return 0; 
} 
**************************************************************

     #include <stdio.h>
     #include <stdlib.h>
     #include <sys/types.h>        /* defines types used by sys/stat.h */
     #include <sys/stat.h>         /* defines S_IREAD & S_IWRITE       */

     int main()
     {
        int fd;
        fd = creat("datafile.dat", S_IREAD | S_IWRITE);

        if (fd == -1)
           printf("Error in opening datafile.dat\n");
        else
           {
           printf("datafile.dat opened for read/write access\n");
           printf("datafile.dat is currently empty\n");
           }

        close(fd);

        exit (0);
     }
********************************************

     #include <fcntl.h>         /* defines options flags */
     #include <sys/types.h>     /* defines types used by sys/stat.h */
     #include <sys/stat.h>      /* defines S_IREAD & S_IWRITE  */

     static char message[] = "Hello, world";

     int main()
     {
        int fd;
        char buffer[80];

        /* open datafile.dat for read/write access   (O_RDWR)
           create datafile.dat if it does not exist  (O_CREAT)
           return error if datafile already exists   (O_EXCL)
           permit read/write access to file  (S_IWRITE | S_IREAD)
        */
     fd = open("datafile.dat",O_RDWR | O_CREAT | O_EXCL, S_IREAD | S_IWRITE);
        if (fd != -1)
           {
           printf("datafile.dat opened for read/write access\n");

           //write(fd, message, sizeof(message));

           lseek(fd, 0L, 0);     /* go back to the beginning of the file */

           if (read(fd, buffer, sizeof(message)) == sizeof(message))
              printf("\"%s\" was written to datafile.dat\n", buffer);

           else
              printf("*** error reading datafile.dat ***\n");

           close (fd);
           }
        else
           printf("*** datafile.dat already exists ***\n");
        exit (0);
     }


*****************************************************************

#include <stdio.h>
     #include <fcntl.h>
     #include <sys/types.h>
     #include <sys/stat.h>

     int main()
     {
        int fd;

        fd = open("foo.bar",O_WRONLY | O_CREAT, S_IREAD | S_IWRITE );

        if (fd == -1)
           {
           perror("foo.bar");
           exit (1);
           }

        close(1);         /* close standard output  */
        dup(fd);       /* fd will be duplicated into standard out's slot */
        close(fd);        /* close the extra slot */
        printf("Hello, world!\n");    /* should go to file foo.bar */
        exit (0);         /* exit() will close the files */
     }




