#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
 
int main () {
 
   system("./zoom &");
   system("ps -l");
   sleep(3);
   system("kill -9 $(ps -l|grep -w Z|tr -s ' '|cut -d ' ' -f 5)");
   sleep(7);
   printf("\n\nupdated list of processes with their states\n\n");
   system("ps -l");
   return(0);
} 
