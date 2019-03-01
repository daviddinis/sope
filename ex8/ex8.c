#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[]) {
    int i = 0;
    srand(time(NULL));
    int numero = atoi(argv[1]);
    while (numero < atoi(argv[2])){
        numero = rand() % atoi(argv[1]);
        printf("%d \n", numero);
        i++;
    }
    printf("iteracao: %d \n", numero);

    return(0);
}