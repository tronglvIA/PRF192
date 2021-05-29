#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>

//input Number Inrange
//check prime
bool isPrime(int n){
    for (int i=2; i<=sqrt(n);i++)
        if (n%i==0) return false;
    return true;
}
//sum prime 
int sumPrime(int x){
    int s=0,n=1,count=0;
    while (count<x){
        if (isPrime(n)==true){
            s+=n;
            count++;
        }
        n++;
    }
    return s;
}
//Print fibonacci
void fibo(int p){
    int i,value=0,f2=1,f1=0;
    printf("%d ", f1);
    for(i=1; i<p; i++){
        printf("%d ",f2);
        value = f1 + f2 ;
        f1=f2;
        f2 =value;
    }
}
//

int main(){
    int fun;
    char opinion;
    printf("------------------------Select a function----------\n");
    printf("1.Sum Prime\n");
    printf("2.Average\n");
    printf("3.Print\n");
    printf("4.Factorial\n");
    printf("5.Exit\n");
    do{
        printf(" + Please chossing the function that you want to run: ");
        scanf("%d",&fun);
        if ((fun>5) || (fun<=0)){
            printf("======> Do you want to exit the program? [Y/N] : ");
            fflush(stdin);
            scanf("%c",&opinion);
            if (opinion=='y' || opinion =='Y') exit(0);
        }
    } while (fun>5 || fun <=0);
    switch (fun)
    {
        case 1:
            break;
        case 2:
            
            break;
        case 5:
            printf("Good Bye!");
            exit(0);
            break;
    }
    getchar();
    return 0;
}