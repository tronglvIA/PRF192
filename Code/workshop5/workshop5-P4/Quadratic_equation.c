#include<stdio.h>
#include<math.h>

void Equation(double a, double b, double c){
    double discriminant, root1, root2, realPart, imagPart;
    discriminant = b * b - 4 * a * c;
    printf("The %.2lfX^2 %.2lfX %.2lf = 0 \n\n", a,b,c);
    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi ", realPart, imagPart, realPart, imagPart);
    }
}