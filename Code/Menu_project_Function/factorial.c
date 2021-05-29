#include<stdio.h>


double factotial(int n){
    int i;
    long value=1;
    for (i=2; i<=n; i++) value=value*i;
    return value;
}