#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"StringProcessing.c"

void Add(char names[][30]);
void Remove(char names[][30]);
void look(char names[][30]);
void display(char names[][30]);
void getfun();
void Quit();


int n,pos=0;
char names[100][30],choice;

int main(){
    getfun();
    Quit();
    return 0;
}

void getfun(){
    printf("\n\n");
    printf("       =====================================================\n");
    printf("                1- Add a student. \n");
    printf("                2- Remove a student. \n");
    printf("                3- Search a student. \n");
    printf("                4- Print the list in ascending orther.\n");
    printf("                5- Quit.\n");
    printf("        =====================================================\n");
    printf(" Enter your choice 1..5: ");
    choice= getchar();
    while (choice == '\n'){
        choice = getchar();
    }
    switch (choice){
        case '1':
            Add(names);
            getfun();
            break;
        case '2':
            Remove(names);
            getfun();
            break;
        case '3':
            look(names);
            getfun();
            break;
        case '4':
            display(names);
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
// Add a name of one student.
void Add(char names[][30]){
   printf("Enter the name's student: ");
   fflush(stdin);
   scanf("%30[^\n]", names[pos]);
   strupr(names[pos]);
   trim(names[pos]);
   pos+=1;
}
// remove a name of one student.
void Remove(char names[][30]){
    int index;
    char after;
    printf("Enter your position you want to remove (position >0): ");
    while(scanf("%d%c",&index,&after) != 2 || after !='\n'|| index<=0 || index>pos){
        fflush(stdin);
        printf("The position is not correct, enter again: ");
    }
    printf("The work remove [%s] completed. \n", names[index-1]);
    for (int i=index-1; i<pos-1; i++){
        strcpy(names[i],names[i+1]);
    }
    pos-=1; 
}
// Search a student 
void look(char names[][30]){
    char name_search[30];
    int count=0;
    printf("Enter the name's student you want to search: ");
    fflush(stdin);
    scanf("%30[^\n]", name_search);
    strupr(name_search);
    trim(name_search);
    for (int i=0; i<pos; i++){
        if (strcmp(name_search, names[i])==0){
            printf("At index = %d\n",i+1);
            count+=1;
        }
    }
    if (count==0) printf("Name not found!\n");
    getchar();
}
// Print the list in ascending orther.
void display(char names[][30]){
    char temp[30];
    //  Sorting name's students in ascending alphabet of string.
    for(int i=0; i<pos-1; i++){
        for (int j= 0; j< pos-i-1; j++){
             if (strcmp(names[j],names[j+1]) > 0){
                strcpy(temp,names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1],temp);
            } 
        }
    }

    //display in terminal.
    for(int i=0; i<pos; i++ ){
        if (strlen(names[i])!=0){
            printf("names [%d]: ", i+1);
            printf("%s\n", names[i]);
        }
    }
}