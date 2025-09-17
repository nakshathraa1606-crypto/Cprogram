#include<stdio.h>
int main(){
	int a,b;
	scanf("%d" , &a);
	b=a%10;
	if(b%2==0){
		printf("last digit is even");
	}else{
		printf("last digit is odd");
	}
	return 0;
}