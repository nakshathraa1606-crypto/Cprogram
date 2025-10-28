#include<stdio.h>
int main(){
	int n;
	int lastdigit,rem;
	scanf("%d",n);
	lastdigit=n%10;
	rem=n/10;
	printf("%d\n",lastdigit);
	printf("%d\n",rem);
	return 0;
	
}
