#include<stdio.h>
int main(){
	int l,b,h,s,v;
	printf("the length is",l);
	scanf("%d",&l);
	printf("the breadth is",b);
	scanf("%d",&b);
	printf("the height is",h);
	scanf("%d",&h);
	s=2*(l*b+b*h+h*l);
	v=l*b*h;
	printf("the perimeter of cuboid is %d\n",s);
	printf("the volume of cuboid is %d\n",v);
	return 0;
}