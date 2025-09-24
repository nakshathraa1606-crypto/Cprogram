#include<stdio.h>
int main(){
	int r,h,s,v;
	printf("the radius is",r);
	scanf("%d",&r);
	printf("the height is",h);
	scanf("%d",&h);
	s=2*3.14*r*(r+h);
	v=3.14*r*r*h;
	printf("the surface area of cylinder is %d\n",s);
	printf("the volume of cylinder is %d\n",v);
	return 0;
}