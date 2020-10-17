#include<stdio.h>
void add()
{
	int num1, num2,res;
	printf("enter two number \n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	res=num1+num2;
	printf("sum of %d and %d ",num1, num2, res);	
}
int main()
{
	add();

}
