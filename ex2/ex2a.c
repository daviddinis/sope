#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc,char *argv[])  { 

    for (int k = 0; k < atoi(argv[argc- 1]); k++){
           printf("Hello ");
    for(int i = 1; i < argc - 1; i++){
        printf("%s ", argv[i]);
    }
    printf("! \n");
    }
 
    return 1; 
}