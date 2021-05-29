/*
Perform the following operations on integer array of 10 elements. 
Accept the values from user :
    a)Sort an array in ascending order and print the results to the screen.
    b)Output sum of all odd values stored in an array.
    c)Output even values stored in an array.
    d)List values that only appear once in the array
Author:     LUONG VAN TRONG
CLASS:      IA1504
ID STUDENT: SE150340
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

void menu();
void Quit();
void getArr(int arr[], int size);
void sort(int arr[]);
int sum_odd_values(int arr[]);
void display_even_values(int arr[]);
void list_appear_once(int arr[]);
void display(int arr[]);

int size, arr[10];
char check, choice;

int main(){
    // Enter data.
    printf("The elements of array (<10) and (>0). \n ");
    printf("*Enter the elements of array: ");
    // Validation data.
    while (scanf("%d%c",&size,&check)!=2 || size <=0 || size>10 || check != '\n')
    {
        fflush(stdin);
        printf("    The elemets of array is not correct, enter again: ");
    }
    getArr(arr,size); // Get value of elements
    menu();
    Quit();
    return 0;
}
// Display for User informations about Functions in program.
// providing which Functions(1..4), if user enter other >>> goto Quit(); functions to asking to continue or not?
void menu(){
    printf("+==========================================================+\n");
    printf("|      1- Print out the array in ascending.                |\n");
    printf("|      2- Output sum of all odd values stored in an array. |\n");
    printf("|      3- Output even values stored in an array.           |\n");
    printf("|      4- List values that only appear once in the array.  |\n");
    printf("+==========================================================+\n");
    printf("Enter your choice: "); choice=getchar();
    while (choice == '\n') {
        choice = getchar();
    }
    switch (choice)
    {
        case '1': 
            printf("After sorting: \n");
            sort(arr);                                                  //sort array in ascending and display.
            Quit();
            break;
        case '2':
            printf("The sum of all odd values stored in an array: ");
            printf("%d\n",sum_odd_values(arr));                         // Sum of all odd values in array.
            Quit();
            break;
        case '3':
            printf("The even values stored in an array: ");
            display_even_values(arr);                                   // Display in terminal evens values in array.
            printf("\n");
            Quit();
            break;
        case '4':
            printf("List values that only appear once in the array: \n");
            list_appear_once(arr);                                      //  Processing and Display values in the array that just appearing once.
            Quit();
            break;
        default:
            Quit();
            break;
    }
}

// choice= Y or y >>> exiting program 
// choice= N or n >>> goto nemu();
// choice = orther >>> goto Quit();
void Quit(){
    printf("Do you want to exit? [Y/N]: ");
    choice = getchar();
    while (choice== '\n'){
        choice = getchar();
    }
    switch (choice)
    {
        case 'Y':
            exit(0);
            break;
        case 'y':
            exit(0);
            break;
        case 'N':
            menu();
            break;
        case 'n':
            menu();
            break;
        default:
            Quit();
            break;
    }
}


// Get value of elements with correct data type.
void getArr(int arr[], int size){
    char after;
    printf("Enter elements in array: \n");
    //Enter with correct data type.
    for (int i = 0; i < size; i++){
        printf("\tElement[%d]= ",i+1);
        while(scanf("%d%c", &arr[i], &after) !=2 || after != '\n'){
            fflush(stdin);
            printf("\t\t\tData's Element[%d] is not correct, enter again!\n",i+1);
            printf("\tElement[%d]= ",i+1);
        }
    }
}

// Sorting array in in ascending with bubble sort.
void sort(int arr[]){
    int tmp;
    for (int i = 0; i < size-1; i++)        
       for (int j = 0; j < size-i-1; j++)  
           if (arr[j] > arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
           } 
    display(arr);
}

// Sum of all odd values in array.
int sum_odd_values(int arr[]){
    int result=0;
    for (int i=0; i<size; i++){
        if (arr[i]%2!=0) result+=arr[i];
    }
    return result;
}

// Display in terminal evens values in array.
void display_even_values(int arr[]){
    printf("*Array elements: ");
    for (int i=0; i< size; i++){
        if (arr[i]%2==0) printf("%d  \t", arr[i]);
    }
}

//  Processing and Display values in the array that just appearing once.
void list_appear_once(int arr[]){
    int i,after,before,count=0;
    printf("*List values: ");
    for (int i=0; i<size; i++){
        if ((i==0) || (i==size-1)) count+=1;
        // check all elemets before INDEX, Are the same?
        for (int before=0; before<i; before ++){
            if (arr[before] == arr[i]) break;
                else if (before == (i-1)) count+=1;
        }
        // check all elemets after INDEX, Are the same?
        for (int after=i+1; after<size; after++){
            if (arr[after] == arr[i]) break;
                else if (after == (size-1)) count+=1;
        }
        // if after and before none of elements the same (count==2)print arr[].
        if (count==2) printf("%d  \t", arr[i]);
        count=0;
    }
    printf("\n");
}

// display value's elements in array.
void display(int arr[]){
    printf("*Array elements: ");
    for(int i=0; i<size; i++) printf("%d  \t", arr[i]);
    printf("\n");
}
