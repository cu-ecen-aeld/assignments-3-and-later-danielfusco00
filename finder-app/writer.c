/** writer.c for assignment 2
# Author: danielfusco00
# writer writefile writestr
**/
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>

int main(int argc, char **argv)
{
    //writefile = argv[1];
    //writestr = argv[2];
    //openlog(NULL,0,LOG_USER); --- optional
    //setlogmask (LOG_UPTO (LOG_ERR)); --- optional
    //char a,b;    
    //argv[0] = ./writer
    //a = atoi(argv[1]);  ----- converte string pra int
    //b = atoi(argv[2]);  ----- converte string pra int

    if (argc != 3)
    {
    	syslog(LOG_ERR,"Invalid Number of arguments: %d", argc-1);
    	printf("Invalid Number of arguments: %d\n", argc-1);
    }
    else
    {
        syslog(LOG_DEBUG,"Writing %s to %s.", argv[2], argv[1]);
        FILE *file = fopen (argv[1], "w+");
        if (file == NULL)
        {
             syslog(LOG_ERR,"ERRO: File %s not created", argv[1]);
        }
        else
        {
             fputs(argv[2],file);
             fclose(file);
             syslog(LOG_DEBUG,"The string %s was written to the file: %s.", argv[2], argv[1]);
        }
    }
    
    //closelog(); --- optional
    return 0;
}

