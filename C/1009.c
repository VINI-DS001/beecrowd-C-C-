#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome;
    double salario,vendasm,total;

    scanf("%s", &nome);
    scanf("%lf %lf", &salario, &vendasm);

    total = salario + (vendasm * 0.15);

    printf("TOTAL = R$ %.2lf\n", total);

    system("pause");
    return 0;
}