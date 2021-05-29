/* version 1.1 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// #define MAX      80          /* maximum length of buffer          */
// #define DIGIT     1          /* data will be read as digits 0-9   */
// #define ALPHA     2          /* data will be read as alphabet A-Z */
// #define STRING    3          /* data is read as ASCII             */

int readinput( char buff[], int mode, int limit ) {
	int ch, index = 0;

	ch = getchar();
	while( (ch != '\n') && (index < limit) ) {
		switch( mode ) {
			case 1:
				if( isdigit( ch ) ) {
					buff[index] = ch;
					index++;
				}
				break;
			case 2:
				if( isalpha( ch ) ) {
					buff[index] = ch;
					index++;
				}
				break;
			case 3:
				if( isascii( ch ) ) {
					buff[index] = ch;
					index++;
				}
				break;
			default:
				/* this should not occur */
				break;
		}
		ch = getchar();
	}
	buff[index] = 0x00;  /* null terminate input */
	return index;
}

int main() {
	char buffer[80];
	int number, digits = 0;

	while( digits == 0 ) {
		printf("Please enter an integer\n");
		digits = readinput( buffer, 1, 80 );
		if( digits != 0 ) {
			number = atoi(buffer);
			printf("The number you entered was %d\n", number );
		}
	}
}
