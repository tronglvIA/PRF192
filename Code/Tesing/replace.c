#include<stdio.h>
#include<string.h>

char* replaceString(char* s, char* oldtext, char* replacetext){
    int len_oldtext =strlen(oldtext);
    int len_replacetext= strlen(replacetext);
    char temp[100];
    // Find position oldtext occur in s.
    char* pstr= strstr(s,oldtext);
    // shift the after text to left.
    strcpy(pstr,pstr+len_oldtext);
    if (len_replacetext > 0){
        strcpy(temp,pstr);
        strcpy(pstr+len_replacetext,temp);
        for (int i=0; i<len_replacetext; i++ ) *(pstr+i) = replacetext[i];
    }
    return s;
}

int main(){
    char source[100];
    char subtext[50];
    char replacetext[50];
    printf("Enter your s: ");
    fflush(stdin);
    scanf("%[^\n]", source);
    printf("Enter your oldtext: ");
    fflush(stdin);
    scanf("%[^\n]", subtext);
    printf("Enter your replacetext: ");
    fflush(stdin);
    scanf("%[^\n]", replacetext);
    // while (strstr(source,subtext)!=NULL){
        replaceString(source, subtext, replacetext);
    // };
    puts(source);
    getchar();
    return 0;
}