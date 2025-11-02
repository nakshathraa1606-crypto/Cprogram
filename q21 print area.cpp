#include<stdio.h>
int main(){
	const float pi=3.14;
	float area1,area2 ,base,height,radius,side,area3,breadth,area4;
	printf("enter base: ");
	scanf("%f",&base);
	printf("enter height: ");
	scanf("%f",&height);
	area1 =(base*height)/2;
	printf("area of the triangle is: %.2f",area1);
	printf("\nenter radius:");
	scanf("%f",&radius);
	area2 = pi*radius*radius;
	printf("area of the circle is : %.2f",area2);
	printf("\nenter side :");
	scanf("%f",&side);
	area3=side*side;
	printf("the area of the square : %.2f",area3);
	printf("\nenter breadth :");
	scanf("%f",& breadth);
	area4=breadth*height;
	printf("the area of rectangle is : %.2f",area4);
	
	
	return 0;
}
