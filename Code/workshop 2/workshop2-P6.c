#include<stdio.h>

int main(){
    int code;
    printf("\t Character |\t\t\t DEC \n");
    for (code=0; code<= 255; code++)
    {
        printf("\t\t %c  \t\t\t %d  \n", code, code);
    }
    getchar();
    return 0;
}