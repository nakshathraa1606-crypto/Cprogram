#include<stdio.h>
int main(){
	int a;
	scanf("%d" , &a);
	if(a%3==0 | a%7==0){
		printf("it is divisible by 3 or 7");
	}else{
		printf("it is not divisible");
	}
	return 0;
}