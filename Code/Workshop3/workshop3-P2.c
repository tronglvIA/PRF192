#include<stdio.h>

int check_data(int d, int m, int y){
    int result;
    switch (m)
    {
    case 2:
        if ( y%400==0 || ( y%4==0 && y%100!=0))
            if ( d>=1 && d<= 29) result = 1; else result =0;
        else  if ( d>=1 && d<=28) result =1; else result =0;
        break;
    case 4:
        if ( d>=1 && d<= 30) result = 1; else result =0;
        break;
    case 6:
        if ( d>=1 && d<= 30) result = 1; else result =0;
        break;
    case 9:
        if ( d>=1 && d<= 30) result = 1; else result =0;
        break;
    case 11:
        if ( d>=1 && d<= 30) result = 1; else result =0;
        break;
    default:
        if (m<1 || m >12) result =0;
        else if (d>=1 && d<= 31) result=1; else result =0;
        break;
    }
    return result;
}

int main(){
    int d, m, y, check;
    printf("Input day = ");
    scanf("%d",&d);
    printf("Input month = ");
    scanf("%d",&m);
    printf("Input year = ");
    scanf("%d",&y);
    if (check_data(d,m,y)==1) {
        printf("The data is valid");
    } else printf("The data is not");
    getchar();
    return 0;
}