#include<stdio.h>
int main(){
	int a;
	scanf("%d" , &a);
	if(a<0){
		printf("it is negative");
	}else if(a==0){
		printf("it is zero");
	}else{
		printf("it is positive");
	}
	return 0;
}