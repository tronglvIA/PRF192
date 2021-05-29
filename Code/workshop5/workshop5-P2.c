/*Problem 2. Ball Lottery ( 2 marks)
A basket contains ten balls. 
Balls are numbered from 1 to 10.
User gets a pair of balls and he/she hopes that sum of numbers is equal to a known expected total.
This problem is the same with the previous problem but the total is between 2 to 20.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getInt();
int main(){
	srand(time(NULL));
	int random1, random2, count = 0, total = 0;
	
	total = getInt();
	do{
		// if(count != 0){
		sleep(1);
		// }
		// limit the range in [1...6] >>>>rand() % 6 + 1;
		random1 = rand() % 10 + 1;
		random2 = rand() % 10 + 1;
		count++;
		printf("\n  Result of throw %2d: %d and %d total = %d", count, random1, random2, random1 + random2);
	}while(random1 + random2 != total);
	printf("\n  You got your total in %d picks!", count);
	return 0;
}

int getInt(){
	int total;
	char after;
	do{
		fflush(stdin);
		system("cls");
		printf("  Dice Thrower\n  ==========\n");
		printf("  Total sought is an interger in rage[2...20]\n");
		printf("  Total sought: ");
	}while(scanf("%d%c", &total, &after) != 2 || total < 2 || total > 20 || after != '\n');
	return total;
}