#include<bits/stdc++.h>
int main()
{
	int a=123;
	int b,c;
	int sum;
	int x;
	while(a<=333)
	{
		b=2*a;
		c=a*3;
		sum=a/100+a/10%10+a%10+b/100+b/10%10+b%10+c/100+c/10%10+c%10;
		x=(a/100)*(a/10%10)*(a%10)*(b/100)*(b/10%10)*(b%10)*(c/100)*(c/10%10)*(c%10);
		if((sum==1+2+3+4+5+6+7+8+9)&&(x==1*2*3*4*5*6*7*8*9))
			printf("%d %d %d\n",a,b,c);
		a=a+1;
	}
	return 0;
}

