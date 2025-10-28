#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	c=b;
	b=a;
	a=c;
	printf("%d\n%d\n",a,b);
	return 0;
	
}
