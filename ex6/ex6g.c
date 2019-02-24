// PROGRAMA p6a.c
#include <stdio.h>
#include <stdlib.h>
 #include <errno.h>
 #include <string.h>
#define BUF_LENGTH 256
#define MAX 255

int main(int argc, char *argv[]) {
    FILE *src, *dst;
    if (argc != 2){
        printf("usage:nome_do_executável file1 file2  \n");
    }
    char buf[BUF_LENGTH];
    if ( ( src = fopen( argv[1], "r" ) ) == NULL ) {
        //printf("error: %s! \n", getenv("ERRNO"));
        printf( "Error opening file: %d\n",errno);
        exit(1);
    }
    if ( ( dst = fopen( argv[2], "w" ) ) == NULL )
    {
        exit(2);
    }
    while( ( fgets( buf, MAX, src ) ) != NULL ) {
        fputs( buf, dst );
    }
    fclose( src );
    fclose( dst );
    exit(0);  // zero é geralmente indicativo de "sucesso"
}