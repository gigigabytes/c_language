#include <stdio.h>
double soma (double a, double b, double c, double d){
    double s = (a+b+c+d)/4;
    return s;
}
double main(){
    double a, b, c, d;
    printf("Digite quatro números reais: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("a media eh: %.2lf\n", soma(a, b, c, d));
    return 0;
}


