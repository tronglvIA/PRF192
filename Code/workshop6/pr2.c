#include<stdio.h>
#include<stdlib.h>


void get_arr(float a[], int size);
void display();
void add();
void search();
void in_range();
void sort();

float arr[100];
int size,value,pos,min,max,temp;

int main(){
    printf("*Enter the elements of array: ");
    scanf("%d",&size);
    get_arr(arr,size);
    label1:
    printf("+==================================================+\n");
    printf("|       1- Add the value.                          |\n");
    printf("|       2- Search the vale.                        |\n");
    printf("|       3- Print out the array.                    |\n");
    printf("|       4- Print out value in the range.           |\n");
    printf("|       5- Print out the array in ascending.       |\n");
    printf("+==================================================+\n");
    char choice;
    printf("Enter your choice: "); choice=getchar();
    while (choice == '\n') {
        choice = getchar();
    }
    switch (choice)
    {
        case '1':
            add();
            goto label2;
            break;
        case '2':
            search();
            goto label2;
            break;
        case '3':
            display();
            goto label2;
            break;
        case '4':
            in_range();
            goto label2;
            break;
        case '5':
            sort();
            display();
            goto label2;
            break;
        default:
            goto label2;
            break;
    }

    label2:
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
            system("cls");
            goto label1;
            break;
        case 'n':
            system("cls");
            goto label1;
            break;
        default:
            goto label2;
            break;
    }
    return 0;
}

void get_arr(float a[], int size){
    printf("Enter elements in array: \n");
    for (int i = 0; i < size; i++){
        printf("\tElement[%d]= ",i+1);
        scanf("%f", &arr[i]);
    }
}

void display(){
    printf("*Array elements: ");
    for(int i=0; i<size; i++) printf("%f\t", arr[i]);
    printf("\n");
}

void add(){
    printf("\tEnter element to insert : ");
    scanf("%d", &value);
    label3:
    printf("\tEnter the element position : ");
    scanf("%d", &pos);
    if(pos > size+1 || pos <= 0){
        printf("Invalid position! Please enter position between 1 to %d", size);
        goto label3;
    } else{
            /*  shifting to right */
            for(int i=size; i>=pos; i--) arr[i] = arr[i-1];
            /* Insert new element at given position and increment size */
            arr[pos-1] = value;
            size++; 
        }
}

void search(){
    printf("Enter element to insert : ");
    scanf("%d", &value);
    for(int i=0; i<size; i++){
        if (arr[i]==value)
            printf("Element at pos[%d]\n",i+1);
    }
}

void sort(){
    for (int i = 0; i < size-1; i++)        
       for (int j = 0; j < size-i-1; j++)  
           if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
           } 
    
}

void in_range(){
    printf("Enter the min value = ");
    scanf("%d", &min);
    printf("Enter the min value = ");
    scanf("%d", &max);
    for (int i=0; i<size; i++){
        if (arr[i]>=min && arr[i]<=max){
            printf("*Array elements[%d]: ",i+1);
            printf("%f\t", arr[i]);
        }
        printf("\n");
    }
}