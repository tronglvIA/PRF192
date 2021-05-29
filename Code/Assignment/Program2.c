/*Write a program that allows the user to enter positive integers n, then sum the prime numbers less than n.
Author:     LUONG VAN TRONG
CLASS:      IA1504
ID STUDENT: SE150340
*/
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>

// Functions check prime if isprime return true else return false.
bool isPrime(int value){
    int result, i, count=0;
    // check value have submultiple or not if have count++.
    for (i=2; i<= sqrt(value); i++){
        if (value % i ==0) count++;
    }
    if (count==0) result=true; else result =false;
    return result;
}

int main(){
    int n,sum=0;
    char after;
// Enter data.
    printf("Enter the N is interger (N>0): \n");
    printf("    Enter the N= ");
    while (scanf("%d%c",&n,&after) !=2 || n<=0 || after != '\n'){
        printf("\t\tN is not correct, enter again: \n");
        printf("    Enter the N= ");
        fflush(stdin);
    }
// Sum = sum + i if i isPrime.
    for (int i=2; i<n; i++){
        if (isPrime(i)==true) sum+=i;
    }
//Display result sum.
    printf("The sum prime numbers less than N=%d: ",n);
    printf("%d",sum);
    getchar();
    return 0;
}
