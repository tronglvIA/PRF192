#include<stdio.h>
#include<math.h>

void check_pos(double x, double y, double r){
    double leng;
    leng = sqrt((x*x)+(y*y)); // sqrt return double;
    if (leng > r) {
        printf("The point is out the cycle.");
    } else if (leng < r){
        printf("The point is inside the cycle.");
    } else printf("The point is on the cycle.");
}


int main(){
    double x,y,r;
    printf("Input the point (x,y)\n");
    printf("Input the x = ");
    scanf("%lf",&x);
    printf("Input the y = ");
    scanf("%lf",&y);
    do{
        printf("Input the R = ");
        scanf("%lf",&r);
    } while (r<0);
    check_pos(x,y,r);
    getchar();
    return 0;
}