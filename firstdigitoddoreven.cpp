#include<stdio.h>
int main(){
	int a,b;
	scanf("%d" , &a);
	b=a/100;
	if(b%2==0){
		printf("last digit is even");
	}else{
		printf("odd");
	}
	return 0;
}