/* file pointer_demo5.c */
#include <stdio.h>
#include<stdlib.h>

void 

int main()
{  char* pc1, pc2;
   pc1 = (char*)malloc(sizeof(char));    
   pc2 = (char*)malloc(sizeof(char));   
   printf("pc1 = ");
   scanf("%c",pc1);
   printf("pc2 = "); 
   scanf("%c", pc2);

   getchar();
   free(pc1);
   free(pc2);
   return 0;
}
