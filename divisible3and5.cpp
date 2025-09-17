#include<stdio.h>
int main(){
	int a;
	scanf("%d" , &a);
	if(a%3==0 && a%5==0){
		printf("it is divisible by 3 and 5");
	}else{
		printf("it is not divisible");
	}
	return 0;
}