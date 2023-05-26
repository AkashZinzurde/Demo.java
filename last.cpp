#include<stdio.h>

int main(int argc, char *argv[])
{
    printf("Demostration of command line\n")
   int NO1 = atoi(argv[1]);
   int No2 = atoi (argv[2]);
   int Ans = No1 + No2;
   printf("addition is :%d \n " Ans);
   
    return 0;

    }
    // gcc commandline.c -o myexe
    // myexe 11 21