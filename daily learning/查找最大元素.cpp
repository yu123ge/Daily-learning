//���������ÿ���ַ������������е������ĸ���ڸ���ĸ��������ַ�����(max)����

#include<stdio.h>
#include<string.h>
int main()
{	char a[100];//�����㹻�����ַ��� 
	int i;
while(scanf("%s",a)!=EOF)//������������ 
	{
		int i,j=0;
		 char max=a[0];
		for(i=1;i<strlen(a);i++)
		{
			if(a[i]>=max)
			max=a[i];
			
		}//���ڲ��������ĸ 
		for(i=0;i<strlen(a);i++)
		{
			printf("%c",a[i]);
			if(a[i]==max)
			printf("(max)");
		}//���������ַ���������Ԫ�ش�ӡ�����������ӡ��Ԫ�ص������ֵ���ں������max 
		printf("\n");//���з� 
	
	}

 
	return 0;
	}
