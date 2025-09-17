#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d" , &a ,&b);
	c=a%10;
	d=b%10;
	if(c==d){
		printf("last digit is same");
	}else{
		printf("last digit is not same");
	}
	return 0;
}