#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[], char * envp[])
{

    setenv("USER_NAME", "David Freitas Dinis", 0);
    
    char user[5] = "user";
    char* varial;
    int i;
    for (i = 0; envp[i] != NULL; i++) {
        if (strncmp(user, envp[i], 4) == 0) {
            varial = envp[i];
            break;
        }
    }


    printf("hello %s! \n", getenv("USER"));
    printf("hello %s! \n", getenv("USER_NAME"));

        return 0;
}