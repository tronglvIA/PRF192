#include<stdio.h>
void Input(int* a, int n){
    for (int i=0; i<n; i++){
        printf("a[%d]=");
        scanf("%d", &a[i]);
    }
}

int main(){
    
    getchar();
    return 0;
}