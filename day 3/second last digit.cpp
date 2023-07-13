#include<stdio.h>
int second_last_digit(int N)
{
	N=N%10;
	return N%10;
}
int main()
{
	int N;
	printf("enter the number");
	scanf("%d",&N);
	printf("the second last digit %d = %d",N,second_last_digit);
}
