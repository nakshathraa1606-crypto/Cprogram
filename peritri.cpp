#include<stdio.h>
int main(){
	int l,b,h,p;
	printf("the length is",l);
	scanf("%d",&l);
	printf("the breadth is",b);
	scanf("%d",&b);
	printf("the height is",h);
	scanf("%d",&h);
	p=l+b+h;
	printf("the perimeter of triangle is %d",p);
	return 0;
}