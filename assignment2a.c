#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{ 
    int pid = fork();
    if(pid<0){
        exit(1);
    }
    if (pid > 0){
        printf("parent pid: %d\n", getpid());
        sleep(10);
    }
    else{
        printf("child pid: %d\n", getpid());      
        exit(0);
    }
    return 0;
}
