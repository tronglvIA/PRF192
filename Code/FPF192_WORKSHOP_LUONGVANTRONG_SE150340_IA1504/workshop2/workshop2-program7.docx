#include<stdio.h>

int main(){
    
	char c1, c2, t;
    int sub;
    printf("Input Character 1 = ");
    scanf("%c",&c1);
    fflush(stdin);
    printf("Input character 2 = ");
    scanf("%c",&c2);
    if (c1 > c2){
        t = c1;
        c1 = c2;
        c2 = c1;
    } 
    sub = c2 - c1;
    printf("ASCII code difference betwwen them = %d \n", sub);
    printf("----------------------------------\n");
    for (char code = c1+1; code < c2; code++ ){
        printf("%c : %d, %o, %X\n",code,code,code,code);
    }
    getchar();
    return 0;
}
