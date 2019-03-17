#include <termios.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>



int main(int argc, char const *argv[])
{
    struct termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    struct termios newt = oldt;
    newt.c_lflag &= ~(ECHO | ECHOE | ECHOK | ECHONL | ICANON);
    newt.c_cc[VERASE]=8;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    char str1[20];
    scanf("%s", str1);


    
    
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    printf("%s \n", str1);
    
    return 0;
}   
