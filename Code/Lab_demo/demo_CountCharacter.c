#include<stdio.h> 
#include<ctype.h> 

int main(){ 
    char c1; 
    int x = 0,y =0 ,z =0; 
    while((c1 = getchar())!= '\n'){
         if(isalpha(c1)!=0 ){  
            x++; 
         }
         else if(isdigit(c1)) { 
             y++; 
        } 
        else {
            z++;
        }   
    }

    printf("Alpha:%d, digit:%d, other:%d",x,y,z); 
    getchar(); 
} 