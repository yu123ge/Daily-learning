#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	long long n,T;
	cin>>T;
	while (T--)
	{
		cin>>n;
		if (n <=2 )
		{
			printf("%lld\n",n);
			continue;
		}
		else
		{
			if (n%2)
			{
				printf("%lld\n",n*(n-1)*(n-2));
			}
			else
			{
				if (n%3)
				{
					printf("%lld\n",n*(n-1)*(n-3));
				}
				else
				{
					printf("%lld\n",(n-1)*(n-2)*(n-3));
				}
			}
		}
	}
	
	return 0;
 }
