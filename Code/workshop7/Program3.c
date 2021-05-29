/*
o	Develop a C-program that allows user:
-	Adding a new soft drink
-	Printing out items which belong to a known make.
-	Printing out items whose volumes are between v1 and v2 ( integers)  
-	Printing the list in ascending order based on volumes then prices.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"StringProcessing.c"



#define MAXN 100
#define NAME_LENGTH 22
#define MAKE_LENGTH 22

int pos=0,choice;
char result[30];

//Data of Soft_Drink
char name[MAXN][NAME_LENGTH];
char make[MAXN][MAKE_LENGTH];     // Make means Brand.
int volume[MAXN];
int price[MAXN];
int duration[MAXN];

void Quit();
// get an interger number with right data type.
int getInt(){
    long result;
    char after;
    while (scanf("%d%c",&result,&after)!=2 || after!='\n' || result <=0)
    {
        fflush(stdin);
        printf("\t\t\t\t The data is not correct, enter again:");
    }
    return result;
}
//get string with correct length and processing.
char* process_string(){
    int count=0;
    do{
        fflush(stdin);
        if (count!=0) printf("\t\t\t\tthe length is overload, enter again: ");
        gets(result);
        count++;
    } while(strlen(result)>22);
    // Processing string.
    trim(result);
    return result;
}
//swap String
void swapString(char *s1, char *s2){
    char temp[22];
    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);
}
// swapInt
void swapInt(int* a,int* b)
{  
   int var1 = *a;
   int var2 = *b;
    *a = var2;
    *b = var1;
}




// Adding a softdrink.
void add(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[]){
    printf("\t\tEnter the informations of softdrink.\n");
    printf("Enter the NAME of soft drink: ");
    strcpy(name[pos],process_string());
    printf("Enter the BRAND of soft drink: ");
    strcpy(make[pos],process_string());
    printf("Enter the VOLUME of soft drink: ");
    volume[pos] = getInt();
    printf("Enter the PRICE of soft drink: ");
    price[pos] =getInt();
    printf("Enter the DURATION of soft drink: ");
    duration[pos] =getInt();
    pos++;
}

// Print items base on brand.
void printProductsBrand(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[]){
    char brand[30];
    printf("Enter the Brand you want to search products: ");
    fflush(stdin);
    brand = process_string();
    for(int i=0;  i< pos ; i++){
        if (strcmp(brand,make[i])==0){
            printf("Name softdrink: %s\n", name[i]);
            printf("Volume: %d\n", volume[i]);
            printf("Price: %d\n", price[i]);
            printf("Duration: %d \n", duration[i]);
            printf("\n\n");
        }
    }
}

// Printing out items whose volumes are between v1 and v2 ( integers)
void searchVolume(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[]){
    int v1,v2,temp;
    printf("Enter V1: ");
    v1= getInt();
    printf("Enter V2: ");
    v2= getInt();
    //swap v1 to v2 if v1> v2
    if (v1>v2){
        temp=v1;
        v1=v2;
        v2=temp;
    }
    for (int i=0; i<pos; i++){
        if (volume[i]>v1 && volume[i]<v2){
            printf("Name softdrink: %s\n", name[i]);
            printf("Brand: %s\n", make[i]);
            printf("Price: %d\n", price[i]);
            printf("Duration: %d \n", duration[i]);
            printf("\n\n");
        }
    }
}

// Printing the list in ascending order based on volumes then prices.
void sortVolumeAndPrice(char name[][NAME_LENGTH], char make[][MAKE_LENGTH], int volume[], int price[], int duration[]){
    for (int i=0; i<pos-1; i++){
        for (int j=pos-1; j>i; j-- ){
		    int dVolume = strcmp( volume[j], volume[j-1]);  /* Volume difference */
            int dPrice = strcmp( names[j], names[j-1]); /* Price difference */
            if ( dVolume<0 || (dVolume==0 && dPrice <0)){   
                swapString(name[j], name[j-1]);
                swapString(make[j], make[j-1]);
                swapInt(volume[j], volume[j-1]);
                swapInt(price[j], price[j-1]);
                swapInt(duration[j], duration[j-1]);
            } 
        }
    }
    //Display in terminal
    printf("After sort bases on volumes then prices:\n");
    for(int i=0; i<pos; i++){
        printf("Name softdrink: %s\n", name[i]);
        printf("Brand: %s \n", make[i]);
        printf("Volume: %d\n", volume[i]);
        printf("Price: %d\n", price[i]);
        printf("Duration: %d \n", duration[i]);
        printf("\n\n"); 
    }
}

// get functions
void getfun(){
    printf("\n\n");
    printf("       ========================================================================================\n");
    printf("                1- Adding a new soft drink. \n");
    printf("                2- Printing out items which belong to a known make. \n");
    printf("                3- Printing out items whose volumes are between v1 and v2 ( integers). \n");
    printf("                4- Printing the list in ascending order based on volumes then prices.\n");
    printf("                5- Quit.\n");
    printf("        =======================================================================================\n");
    printf(" Enter your choice 1..5: ");
    choice= getchar();
    while (choice == '\n'){
        choice = getchar();
    }
    switch (choice){
        case '1':
            add(name,make,volume,price,duration);
            getfun();
            break;
        case '2':
            printProductsBrand(name,make,volume,price,duration);
            getfun();
            break;
        case '3':
            searchVolume(name,make,volume,price,duration);
            getfun();
            break;
        case '4':
            sortVolumeAndPrice(name,make,volume,price,duration);
            getfun();
            break;
        case '5':
            exit(0);
            break;
        default:
            Quit();
            break;
    }
}

// Quit functions
void Quit(){
    printf("Do you want to exit? [Y/N]: ");
    fflush(stdin);
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
            // system("cls");
            getfun();
            break;
        case 'n':
            // system("cls");
            getfun();
            break;
        default:
            Quit();
            break;
    }
}



int main(){
    getfun();
    Quit();
    return 0;
}