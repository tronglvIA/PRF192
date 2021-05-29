#include<stdio.h>
#include<stdbool.h>

bool check_day(int d, int m, int y){
    bool result;
    switch (m)
    {
    case 2:
        if ( y%400==0 || ( y%4==0 && y%100!=0))
            if ( d>=1 && d<= 29) result =true; else result = false;
        else  if ( d>=1 && d<=28) result =true; else result = false;
        break;
    case 4:
        if ( d>=1 && d<= 30) result =true; else result = false;
        break;
    case 6:
        if ( d>=1 && d<= 30) result = true; else result = false;
        break;
    case 9:
        if ( d>=1 && d<= 30) result = true; else result = false;
        break;
    case 11:
        if ( d>=1 && d<= 30) result = true; else result = false;
        break;
    default:
        if (m<1 || m >12) result = false;
        else if (d>=1 && d<= 31) result=true; else result = false;
        break;
    }
    return result;
}