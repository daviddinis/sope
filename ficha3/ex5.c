#include <stdio.h>
#include <unistd.h>



int main(void) {

    if(fork() > 0) {
        printf("Hello ");
    }
    else {
        if (fork() > 0){
        printf("my ");

        }
        else {
            
            printf("friends!\n");
            }

    }
    return 0;
}

