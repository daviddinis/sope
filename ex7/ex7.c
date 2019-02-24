#include <stdio.h>
#include <stdlib.h>

void atexitfunction1 () {
   printf("This is atexit function using handler 1\n");
}

void atexitfunction2 () {
   printf("This is atexit function using handler 2\n");
}

int main () {

   printf("Main Done!\n");
   atexit(atexitfunction2);
   //abort();
   atexit(atexitfunction1);

   return(0);
}