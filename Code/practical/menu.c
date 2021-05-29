#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_LEN 200


int getUserChoice()
{  int choice;
   printf("\n1-Vi tri cua Pattern");
   printf("\n2-Index hang co dong dai nhat & So ky tu");
   printf("\nq-Quit");
   printf("\nChoose: \n");
   scanf("%d", &choice);
   return choice;
}


int function1(char *pattern, char *s){
    int pattern_len = strlen(pattern);
    int s_len = strlen(s);
    //
    for (int i=0; i<= s_len-pattern_len; i++){
    	for (int j=0; j< pattern_len; j++){
    		if (s[i+j] != pattern[j]) break;
    	return i;
		}
	}
    return -1;
}

void function2(FILE *fp){
    int count=-1,index;
    char line[200],max[200]=" ";
    fp=fopen("file.txt","r");
	if(fp!=NULL)
	{
		while(fgets(line,sizeof(line),fp)!=NULL) // read whole line
		{
            count +=1;
			if(strlen(max)<strlen(line)){
                strcpy(max,line);
                index = count;
            }
				
		}
		printf("\n Longest line in file is:%s ",max);
		printf(" At line %d\n",index);
		fclose(fp);
	}
	else
	{
	perror("file.txt");
	}
    count =0;
	for (int i=0; max[i];i++){
        if (max[i]==' ') count+=1;
    }
    printf("the numbers of charecter = %d\n\n",strlen(max)-count);
}

int main(){
	int count,check;
	char line[MAX_LEN];
	char s1[100], s2[100];
	FILE * fp = fopen("file.txt","r");
	int choice;
    do
	{  choice=getUserChoice();
       switch(choice)
	   {  case 1: 
	   			  count =0;
	   			  if(fp!=NULL){
	   			  		while (fgets(line,sizeof(line),fp)!=NULL && count <2){
	   			  			if (count==0) strcpy(s1,line); else strcpy(s2,line);
	   			  			count+=1;
							 }
					} else {
						perror("file.txt");
					}
	   			  check=function1(s1,s2);
	   			  if (check!=-1) printf("AT Index %d\n\n",check);
	   			  	else printf("Not_Found.....VALUE FUNCTION1 return: %d \n",check);
	              break;
		  case 2: function2(fp);
				  break;
		  default: printf("Bye!");
		}
	}
	while(choice>0 && choice<3);
	getchar();
	return 0;
}
