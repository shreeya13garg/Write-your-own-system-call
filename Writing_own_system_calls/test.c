#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{  
    printf("Invoking system call");
         
    long int status = syscall(317,1049,"abc.txt");
         
    if(status == 0) 
        printf("System call executed correctly. Use dmesg to check processInfo\n");
    
    else 
        printf("System call did not execute as expected\n");
          
    return 0;
}