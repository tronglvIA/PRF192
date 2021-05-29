#include<stdio.h>
#include<math.h>

// check prime if yes return 1; else return 0;
int check_prime(int value){
    int check, i, count=0;
    if (value==1) check=0;
        else{
            for (i=2; i<= sqrt(value); i++){
                if (value % i ==0) count++;
            }
            if (count==0) check=1; else check =0;
        }
    return check;
}

// compute sum n prime number first.
int sum_prime_first(int num){
    int i=2,times=0;
    long result=0;
    do {
        if (check_prime(i)==1) result=result+i;
        i++;
        times++;
    } while (times<=num);
    return result;
}



// compute anverage n prime number first.
double average_prime(int num){
    double result;
    result=(double)sum_prime_first(num)/(double)num;
    return result;
}