#include<stdio.h>
int main(){
	int num1,num2,remainder;
	scanf("%d %d",&num1, &num2);
	remainder = num1%num2;
	printf("the sum is %d", remainder);
	return 0;
}