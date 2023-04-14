#include <stdio.h>
#include <stdlib.h>

int main ( ){
    int num1, num2,num3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num2 >= num3){
        printf("%d\n%d\n%d\n", num3, num2, num1);
    }
    if (num1 >= num3 && num3 >= num2){
        printf("%d\n%d\n%d\n", num2, num3, num1);
    }
    if (num2 >= num1 && num1 >= num3){
        printf("%d\n%d\n%d\n", num3, num1, num2);
    }
    if (num2 >= num3 && num3 >= num1){
        printf("%d\n%d\n%d\n", num1, num3, num2);
    }
    if (num3 >= num1 && num1 >= num2){
        printf("%d\n%d\n%d\n", num2, num1, num3);
    }
    if (num3 >= num2 && num2 >= num1){
        printf("%d\n%d\n%d\n", num1, num2, num3);
    }

    system("pause");

    return 0;
}