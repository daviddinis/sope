#include <stdio.h>
#include <unistd.h>



int main(void) {

    if(fork() > 0) {
        printf("Hello ");
    }
    else {
        printf("world \n");
    }
    return 0;
}

