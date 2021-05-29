#include<stdio.h>
#include<stdlib.h>
int getInt(){
    int result;
    char after;
    while (scanf("%d%c",&result,&after)!=2 || after != '\n'){
        fflush(stdin);
        printf("\t\tData type is not correct,\nEnter again: ");
    }
    return result;
}
float getfloat(){
    float result;
    char after;
    while (scanf("%f%c",&result,&after)!=2 || after != '\n'){
        fflush(stdin);
        printf("\t\tData type is not correct,\nEnter again: ");
    }
    return result;
}

void getArr(int a[], int size){
    for (int i=0; i<size; i++){
        printf("Element[%d]: ",i+1);
        a[i] = getInt();
    }
}

void maxmin(){
    float arr[4], min, max,a,b,c,d;
    printf("Enter a:");
    arr[0] = getfloat();
    printf("Enter b:");
    arr[1] = getfloat();
    printf("Enter c:");
    arr[2] = getfloat();
    printf("Enter d:");
    arr[3] = getfloat();
    max = arr[0];
    min = arr[0];
    for (int i=0; i<4; i++){
        printf("check %f\n", arr[i]);
    }
    for (int i=1 ; i<4 ; i++){
        if (max<arr[i]) max = arr[i];
        if (min>arr[i]) min = arr[i];
    }
    printf("\na = %.2f  ",max);
    printf("b = %.2f",min);
}

void reverse(int a[], int n){
    printf("After reversing : ");
    for (int i=0; i<n-6; i++)
        printf("%10d",a[i]);
    // 6 elements 
    for (int i=n-1; i>=n-6; i--){
        printf("%10d",a[i]);
    }
}

char*  rep
char menu(){
    char choice;
    printf("\n");
    do{
        printf("\n1- Question1. \n");
        printf("2- Question2. \n");
        printf("3- Question3. \n");
        printf("4- Quit.\n\n");
        printf("\tYour choice: ");
        fflush(stdin);
        choice = getchar();
        if (choice < '1' || choice > '4') printf("Functions not found, enter again. \n");
    } while (choice < '1' || choice > '4');
    return choice;
}



int main(){
    int list[100];
    int size;
    char user;
    user=menu();
    switch (user){
        case '1':
            maxmin();
            user= menu();
            break;
        case '2':
            printf("Enter the size of list: ");
            do {
                size = getInt();
                if (size<6) {
                    printf("Opps...size of list <6!\n");
                    printf("Enter again size= ");
                }
            } while (size<6);
            getArr(list, size);
            reverse(list,size);
            user=menu();
            break;
        case '3':
            user=menu();
            break;
        case '4':
            printf("Good Bye!\n");
            system("pause");
            exit(0);
            break;
    }
    return 0;
}