#include <stdio.h>
#include <stdlib.h>

int main(){
    double x1, x2, y1, y2;
    printf("Please type two numbers: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Type two more numbers: ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
    printf("%.4lf\n", distance);

    system("pause");
    return 0;
}