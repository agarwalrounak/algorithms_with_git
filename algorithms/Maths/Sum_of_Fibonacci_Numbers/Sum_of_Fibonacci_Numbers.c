// C Program to find sum of Fibonacci numbers
#include<stdio.h>

// Computes value of first fibonacci numbers
int calculateSum(int n)
{
	if (n <= 0)
	return 0;

	int fibo[n+1];
	fibo[0] = 0, fibo[1] = 1;

	// Initialize result
	int sum = fibo[0] + fibo[1];

	// Add remaining terms
	for (int i=2; i<=n; i++)
	{
		fibo[i] = fibo[i-1]+fibo[i-2];
		sum += fibo[i];
	}

	return sum;
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("Sum of Fibonacci numbers is %d\n",calculateSum(n));
	return 0;
}
