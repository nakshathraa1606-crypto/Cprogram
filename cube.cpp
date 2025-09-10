#include<stdio.h>
int main(){
	int a;
	scanf("%d" , &a);
	int cube = a^a^a;
	printf("the cube of given number is %d",cube);
	return 0;
}