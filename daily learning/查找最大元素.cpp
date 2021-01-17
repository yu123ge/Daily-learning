//对于输入的每个字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”。

#include<stdio.h>
#include<string.h>
int main()
{	char a[100];//定义足够长的字符串 
	int i;
while(scanf("%s",a)!=EOF)//连续输入数据 
	{
		int i,j=0;
		 char max=a[0];
		for(i=1;i<strlen(a);i++)
		{
			if(a[i]>=max)
			max=a[i];
			
		}//用于查找最大字母 
		for(i=0;i<strlen(a);i++)
		{
			printf("%c",a[i]);
			if(a[i]==max)
			printf("(max)");
		}//遍历整个字符串，并将元素打印出来，如果打印的元素等于最大值就在后面添加max 
		printf("\n");//换行符 
	
	}

 
	return 0;
	}
