#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,y1,y2;
	float distance;
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	distance=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	printf("%.2f",distance);
	return 0;
}
