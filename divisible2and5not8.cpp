#include<stdio.h>
int main(){
	int a;
	scanf("%d" , &a);
	if(a%2==0 && a%5==0 &&a%8!=0){
		printf("it is divisible by 2 and 5 but not by 8");
	}else{
		printf("it is not divisible");
	}
	return 0;
}