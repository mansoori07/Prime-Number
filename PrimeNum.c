#include <stdio.h>
int prime(int);
main()
{
	int p,n;
	printf("Enter a number:");
	scanf("%d",&n);
	p=prime(n);
	if(p==2)
	{
	printf("%d is  a prime number",n);
    }
    else
    {
    	printf("%d is not a prime number",n);
	}
}
int prime(int n)
{
	static int count,i=1;
	if(i<=n)
	{
		if(n%i==0)
		{
			count++;
			i++;
			prime(n);
			return count;
		}
		else
		{
			i++;
			prime(n);
			return count;
		}
	}
}
