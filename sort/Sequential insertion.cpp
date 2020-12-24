#include<stdio.h>
int main() 
{
	int a[10];
	int i,j,m,temp1,temp2;
	for(i=0; i<9; i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);  
	
	if(m>a[8])
		a[9]=m;   
	else 
	{
		for(i=0; i<10; i++) 
		{
			if(a[i]>m) 
			{
				temp1=a[i];
				a[i]=m;   
				for(j=i+1; j<10; j++) 
				{
					temp2=a[j];
					a[j]=temp1;
					temp1=temp2;  
				}
			  break;
		    }
		}
	}
	
	for(i=0; i<10; i++)
		printf("%d\n",a[i]);
	return 0;
}
