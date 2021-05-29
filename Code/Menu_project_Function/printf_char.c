#include<stdio.h>
#include<ctype.h>

void printf_char(){
    char c1, c2, i;
    printf("* The rule: Please Input two character in Alphabet. \n\a");
// check Input is corrected.
    do {
        printf("\t\t+ Enter the character 1 = ");
        fflush(stdin);
        scanf("%c",&c1);
        printf("\t\t+ Enter the character 2 = ");
        fflush(stdin);
        scanf("%c",&c2);
    } while( c1<'A' || (c1>'Z' && c1<'a') || c1>'z' || c2<'A' || (c2>'Z' && c2<'a') || c2>'z' );  
    printf("\t----------------------------------------The Result-------------------------------------\n ");
// tolower two character if one of them isupper.
    if (isupper(c1)) tolower(c1); 
        else if (isupper(c2)) tolower(c2);
// print out the result.
    if (c1 < c2)
    {
        for (i=c1; i<=c2; i++) printf("%c ", i);    
    } else 
                for (i=c2; i<=c1; i++) printf("%c ",i);
}