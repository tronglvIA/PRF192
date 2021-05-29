#include<stdio.h>
#include<stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// bool check_ISBN(int ISBN){
//     int sum=0, count=;

//     while(ISBN >0 ){
//         a[count]=ISBN%10;
//         ISBN =ISBN /10;
//         count--;
//     }
// }

bool check_ISBN(){
    int ISBN,length_ISBN,sum=0,count=1;
    char Str_ISBN[20];
    label1:
    do{
        fflush(stdin);
        system("cls");
        printf("Enter The ISBN With 10 digits =  ");  
        scanf("%[^\n]", Str_ISBN);
    } while (strlen(Str_ISBN)>10 || 10>strlen(Str_ISBN));
    
    for (int i=0; i<10; i++){
        if (isalpha(Str_ISBN[i])==1 || isalpha(Str_ISBN[i])==2 ) goto label1;
        if (isdigit(Str_ISBN[i])==0) goto label1;
    }

    length_ISBN = strlen(Str_ISBN);
    ISBN = atoi(Str_ISBN); // convert string to int.
    while(count<=length_ISBN){
        sum+=(ISBN%10)*count;
        ISBN = ISBN /10;
        count++;
    }
    if (sum%11==0) return true;
        else return false;
}



// int total_digits(int ISBN){
//     int digits=0;
//     while (ISBN != 0){
//         ISBN = ISBN/10;
//         digits +=1;
//     }
//     return digits;
// }

int main(){
    char choice;
    do{
        if (check_ISBN()) printf("This is a valid ISBN.\n");
            else printf("This is not a valid ISBN.\n");
        printf("Press 0 to exit:  ");
        fflush(stdin);
        choice = getchar();
        // while (choice == '\n'){
        //     choice =getchar();
        // };
    } while (choice != '0' );
    printf("Have a Good Day.");
    getchar();
    return 0;
}