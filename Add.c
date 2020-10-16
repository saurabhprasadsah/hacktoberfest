#include<stdio.h>
void add(int num1, int num2)
{
	int res;
	res=num1+num2;
	printf("sum of %d and %d is %d",num1, num2, res);	
}
int main()
{
	int num1, num2;
	printf("enter two number \n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	add(num1,num2);

}
