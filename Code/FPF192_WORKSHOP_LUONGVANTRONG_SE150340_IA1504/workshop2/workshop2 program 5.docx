/*Use the function getchar() �stdio.h, to input a character, the function toupper(ch) to convert a character to uppercase - ctype.h
ASCII code of the ENTER key: �\n�*/

#include<stdio.h>
#include<ctype.h>

int main (){
	char c;
	int nVowels=0, nConsonants=0, nOthers=0; // truong hop cua enter
	do{
		printf("Input a character = ");
		c= getchar();
		fflush(stdin);
		c=toupper(c);		
		printf("check input character = %c\n", c);
		if (c>='A' && c<= 'Z')
		{
			switch(c){
				case 'A':
					nVowels += 1;
				    break;
				case 'E':
					nVowels += 1;
				    break;
				case 'I':
					nVowels += 1;
				    break;
				case 'O':
					nVowels += 1;
				    break;
				case 'U':
					nVowels += 1;
				    break;
				default: 
					nConsonants +=1;
					break;
			}
		} else nOthers+=1; 
	  } 
	while (c!='\n');
	printf("\t----------------THE RESULT--------------\n");
	printf("the number of VOWELS = %d \n", nVowels);
	printf("the number of CONSONANTS = %d \n", nConsonants);
	printf("the number of OTHERS = %d \n", nOthers);
	getchar();
	return 0;
}
