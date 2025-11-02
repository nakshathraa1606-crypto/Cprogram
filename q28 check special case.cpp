#include<stdio.h>
int main(){
	char n;
	scanf("%c",&n);
	if(n>='A' && n<='Z')
	printf("uppercase");
	else if  (n>='a' && n<='z');
	printf("lowercase");
	else if (n>='0' && n<='9')
	printf("digit");
	else
	printf("special case");
	return 0;
}
