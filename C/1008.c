#include<stdio.h>

int main(){
	int num;
	float hrs, sal, total;
	
	scanf("%d", &num);
	scanf("%f", &hrs);
	scanf("%f", &sal);
	
	total = (hrs * sal);
	
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n",total);
	
	return 0;
}