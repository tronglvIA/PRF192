#include<stdio.h>
#include<string.h>

int function1(char *pattern, char *s){
    int result;
    char* ret =strstr(pattern, s);
    if (ret!=NULL) return result=ret;
        else return result=-1;
}

void function2(FILE *fp){
    int count=-1,index;
    char line[200],max[200]=" ";
    fp=fopen("filename.txt","r");
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
		printf("\n Longest line in file is:- ");
		printf("\n %s at line %d\n",max,index);
		fclose(fp);
	}
	else
	{
	perror("filename.txt");
	}
    count=0;
    for(int i=0;max[i];i++)  
    {
    	if(max[i]==' ')
    	{
          count+=1;
		}
 	}
     int result=strlen(max)-count;
    printf("the numbers of charecter = %d",result);
}

int main(){
    FILE* filename;
    function1(filename);
    return 0;
}