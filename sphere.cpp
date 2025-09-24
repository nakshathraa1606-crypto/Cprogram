#include<stdio.h>
int main(){
	int r,s,v,a,b;
	printf("the radius is",r);
	scanf("%d",&r);
	a=r*r;
	b=r*r*r;
	s=4*3.14*a;
	v=4/3*(3.14*b);
	printf("the surface area of sphere is %d\n",s);
	printf("the volume of sphere is %d\n",v);
	return 0;
}