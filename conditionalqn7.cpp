#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the number");
	scanf("%d",&a);
	printf("enter the number");
	scanf("%d" ,&b);
	printf("enter the number");
	scanf("%d" ,&c);
	if(a<b)
	   printf("a is smaller");
	else if(b<c)
	   printf("b is smaller");
	else
	   printf("c is smaller"); 
return 0;	        
}