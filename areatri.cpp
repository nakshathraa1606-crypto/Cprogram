#include<stdio.h>
int main(){
	int l,b,h,a;
	printf("the length is",l);
	scanf("%d",&l);
	printf("the breadth is",b);
	scanf("%d",&b);
	printf("the height is",h);
	scanf("%d",&h);
	a=l*b*h;
	printf("the area of triangle is %d",a);
	return 0;
}