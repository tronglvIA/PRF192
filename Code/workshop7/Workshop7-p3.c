/*
o	Develop a C-program that allows user:
-	Adding a new soft drink
-	Printing out items which belong to a known make.
-	Printing out items whose volumes are between v1 and v2 ( integers)  
-	Printing the list in ascending order based on volumes then prices.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "StringProcessing.c"

#define MAXN 100
#define NAME_LENGTH 22
#define MAKE_LENGTH 22
#define ENTRY_FORMAT "%22s %22s %10d %10d %10d\n"

void swapInt(int*a, int*b);
void add(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[],int *psize) {
   char s[MAXN];
   printf("Enter Name:");
   fflush(stdin);
   gets(name[*psize]);
   trim(name[*psize]);
   printf("Enter Brand:");
   fflush(stdin);
   scanf("%22[^\n]",s);
   trim(s);
   strcpy(name[*psize], s);
   printf("Enter Volume:");
   scanf("%d",&volume[*psize]);
   printf("Enter Price:");
   scanf("%d",&price[*psize]);
   printf("Enter Duration:");
   scanf("%d",&duration[*psize]);
   (*psize)++;
}

void printHeader() {
    printf("%22s %22s %10d %10d %10d", "Name", "Make", "Volume", "Price", "Duration");
}

void printAnItem(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[], int pos) {
    printf(ENTRY_FORMAT, name[pos], make[pos], volume[pos], price[pos], duration[pos]);
}

void search(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[], int size) {
    int i;
    char brand[MAXN];
    printf("Enter softdrink's make to search: ");
    gets(brand);
    trim(brand);
    for (i = 0; i < size; ++i)
        if (strcmp(make[i],brand)==0){
            printf("Name softdrink: %s\n", name[i]);
            printf("Volume: %d\n", volume[i]);
            printf("Price: %d\n", price[i]);
            printf("Duration: %d \n", duration[i]);
            printf("\n\n");
        }    
}

void searchVolume(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[], int size) {
    int i,vMin,vMax;
    char after;
    //input
    printf("Enter vMin: ");
    while (scanf("%d%c",&vMin,&after)!=2 || after!='\n'){
        fflush(stdin);
        printf("\t\tData is correct, enter again: ");
    }
    printf("Enter vMax: ");
    while (scanf("%d%c",&vMin,&after)!=2 || after!='\n'){
        fflush(stdin);
        printf("\t\tData is correct, enter again: ");
    }
    //swap if vMin > vMax.
    swapInt(&vMin,&vMax);
    for (i = 0; i < size; ++i)
        if (volume[i] >= vMin && volume[i] <= vMax){
            printf("Name softdrink: %s\n", name[i]);
            printf("Brand: %s\n", make[i]);
            printf("Price: %d\n", price[i]);
            printf("Duration: %d \n", duration[i]);
            printf("\n\n");
        }      
}

void swapString(char*a,char*b)
{  char t[MAXN];
   strcpy(t,a);
   strcpy(a,b);
   strcpy(b,t);
}
void swapInt(int*a,int*b)
{  double t=*a;
   *a=*b;
   *b=t;
}
void sortVolumeAndPrice(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[], int size) {
    int i, j;
    for (int i=0; i<size-1; i++){
        for (int j=size-1; j>i; j-- ){
            if (volume[j] > volume[j-1] || (volume[j] == volume[j-1] && price[j] > price[j-1])){   
                swapString(name[j], name[j-1]);
                swapString(make[j], make[j-1]);
                swapInt(&volume[j], &volume[j-1]);
                swapInt(&price[j], &price[j-1]);
                swapInt(&duration[j], &duration[j-1]);
            } 
        }
    }
}  

void printVolumeAndPrice(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[], int size) {
    int i;
    // for (i = 0; i < size; ++i)
    //     sorted[i] = &drinks[i];
    sortVolumeAndPrice(name,make,volume,price,duration,size);
    printHeader();
    for (i = 0; i < size; ++i)
        printf(ENTRY_FORMAT, name[i], make[i], volume[i], price[i], duration[i]);
}


// int interactReadInt(const char * prompt) {
//     int count, ret;
//     do {
//         printf("%s", prompt);
//         count = scanf("%d", &ret);
//         getchar();
//     } while (count < 1);
//     return ret;
// }

// int get(const char * prompt, int min, int max) {
//     int ret;
//     do {
//         ret = interactReadInt(prompt);
//     } while (ret < min || ret > max);
//     return ret;
// }

int menu()
{  printf("\nList of softdrinks\n");
    printf("1. Add a new softdrink\n");
    printf("2. Search items by make\n");
    printf("3. Search items by volume range\n");
    printf("4. Print the list order by volume then price\n");
    printf("5. Quit\n");
    printf("\nSelect:");
   int choice;
   scanf("%d",&choice);
   return choice;
}

int main() {
    int size=0; 
    char name[MAXN][NAME_LENGTH],make[MAXN][MAKE_LENGTH];
    int volume[MAXN],price[MAXN],duration[MAXN]; 
    int choice;
    do {
        choice = menu();
        switch (choice) {
            case 1: {
                if (size == MAXN) {
                    printf("List is full!\n");
                    break;
                } else add(name,make,volume,price,duration,&size);
                printf("Added\n");
                break;
            }
            case 2: {
                if (size == 0) {
                    printf("List is empty!\n");
                    break;
                } else search(name,make,volume,price,duration,size);
                break;
            }
            case 3: {
                searchVolume(name,make,volume,price,duration,size);
                break;
            }
            case 4:
                printVolumeAndPrice(name,make,volume,price,duration,size);
                break;
            case 5:
                printf("Quitting ...\n");
        }
    } while (choice >= 0 && choice < 5);
    return 0;
}




// volume[j] > volume[minIndex] || volume[j] == volume[minIndex] && price[j] > price[minIndex]