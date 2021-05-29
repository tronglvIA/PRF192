#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[10];
    char data_read[250];
    int i,j;
    FILE * data;
    data = fopen("test_file.txt","w");
    
    printf("elemets of array: ");
    printf("auto a number \n ");
    for(int i=0; i<2; i++){
        for (int j=1; j<=i+1; j++){
            a[i]=j;
            fprintf(data, "the value of a[%d] = %d\n",i,a[i]);
        }
    }
    fclose(data);

    
    data = fopen("test_file.txt","r");
    while(fgets(data_read, 250, data) != 0){
        puts(data_read);
    }
    fclose(data);
    return 0;
}