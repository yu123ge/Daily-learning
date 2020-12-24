#include<stdio.h> 
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k = sizeof(a) / sizeof(a[0]);
	int j;
	for (int i = 1; i < k; i++)
	{
		if (a[i] < a[i - 1])
		{
			int temp = a[i];
			for (j = i - 1; j >= 0 && a[j] > temp; j--)
			{
				a[j + 1] = a[j];
			}
			a[j + 1] = temp;
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ",a[i]); 
	} 
	return 0;
}

