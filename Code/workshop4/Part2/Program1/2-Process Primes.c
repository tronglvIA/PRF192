/* When user selects the option 1, 
the program will accept a positive integral number
and print out a message about whether the input number 
is a prime or not.*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

// check prime if yes return 1; else return 0;
bool check_prime(int value){
    bool check;
    int i, count=0;
    if (value==1) check=0;
        else{
            for (i=2; i<= sqrt(value); i++){
                if (value % i ==0) count++;
            }
            if (count==0) check=true; else check =false;
        }
    return check;
}