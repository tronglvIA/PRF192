/*Data about the CD: Songs(char[50])
    DATA:   
        constant MAXN=50
        Song[MAXN][51] = data list.
    +Develop a c_program that alllows user:
1. User enter n in which N is the real number of song in a cd.
2. users enter a list of song in a cd.
3. print the list in ascendinfg other base on song name
4. print the longest name of song and convert this name into uppercase name.

Author : LUONG VAN TRONG
ID: SE150340
CLASS: IA1504
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"trim.c"
#define MAXN 50

int select(){
   printf("\n1- Enter n in which is the real number ofsong i a cd.");
   printf("\n2- enter a list of song in a cd.");
   printf("\n3- print the list in ascendinfg other base on song name.");
   printf("\n4- print the longest name of song and convert this name into uppercase name.");
   printf("\n5- Quit");
   printf("\nSelect:");
   int choice;
   char after;
   while (scanf("%d%c",&choice,&after)!=2 || after !='\n'){
       fflush(stdin);
       printf("Opps....Functions not found.\n");
       printf("Select again: ");
   }
   return choice;
}

// function1
int getN(){
    int result;
    char after;
    printf("Enter the number of songs of CD: ");
     while (scanf("%d%c",&result,&after)!=2 || after !='\n' || result <0 ||result>50 ){
       fflush(stdin);
       printf("Opps....The number of songs out the range[0..50].\n");
       printf("Enter again: ");
   }
   return result;
}
//function2
void Add(char list[][51], int size){
    for (int i=0; i<size; i++){
        printf("Enter the name's SONG[%d]", i+1);
        fflush(stdin);
        scanf("%51[^\n]", list[i]);
        // strupr(list[i]);
        trim(list[i]);
    }
}
//function3 Print the list in ascending base on song name
void listinascending(char list[][51], int size){
    char temp[100];
    //  Sorting name's song in ascending alphabet of string.
    for(int i=0; i<size-1; i++){
        for (int j= 0; j< size-i-1; j++){
             if (strcmp(list[j],list[j+1]) > 0){
                strcpy(temp,list[j]);
                strcpy(list[j], list[j+1]);
                strcpy(list[j+1],temp);
            } 
        }
    }

    //display in terminal.
    printf("After sorted.\n");
    for(int i=0; i<size; i++ ){
        if (strlen(list[i])!=0){
            printf("\t\tSong[%d]: ", i+1);
            printf("%s\n", list[i]);
        }
    }
}
//function4
void printsong(char song[MAXN][51], int n)
{
	char longest[51];
	int i;
	strcpy(longest,song[0]);
	for(i=1;i<n;i++)
	{
		if( strlen(song[i]) > strlen(song[i-1]))
		{
			strcpy(longest,song[i]);
		}
	}
	printf("The longest uppercase song in CD is: %s\n",strupr(longest));
	printf("\n");
}

int main(){
    char song[MAXN][51];
    int userchoice, numberofsong=0;
    do{
        userchoice = select();
        switch (userchoice){
            case 1:
                numberofsong = getN();
                printf("Enter succesful!\n");
                system("pause");
                break;
            case 2:
                while(numberofsong == 0){
                    printf("OPPS............Because NUMBER OF SONG = 0");
                    printf("\nEnter number of song >1 and <51\n");
                    numberofsong = getN();
                    printf("Enter succesful!\n");
                    system("pause");
                }
                Add(song,numberofsong);
                break;
            case 3:
                listinascending(song, numberofsong);
                system("pause");
                break;
            case 4:
                printsong(song, numberofsong);
                break;
            case 5:
                printf("GOOD BYE!\n");
                exit(0);
                break;
            default:
                printf("Opps....Functions not found.\n");
                printf("Select again: ");
                system("pause");
                userchoice = select();
                break;
        }
    } while (userchoice >0 && userchoice <6);
    getchar();
    return 0;
}



