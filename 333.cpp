#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
	char b[100];
	char *p=a;
	int c=0;
	printf("请输入字符串:");
	gets(a);
	strlwr(a);
	printf("\n");
	printf("请输入你想要查找的内容:");
	gets(b);
	printf("\n");
	while((p=strstr(p,b))!=NULL)
	{
        c++;
		p++;
	}
	printf("查找内容的个数为:%d\n",c);
 }



#include <stdio.h>
#include <string.h>
struct Sutdent
	{
		char sutdent_ID[17];
		int seat1;
		int seat2;
	}student[1000];
int main()
{
	int Iint[1000];
	int i,j,n,a;
	printf("考生数：");
	scanf("%d",&a);
	for (i = 0; i < a; i++)
	{
		scanf("%s %d %d",&student[i].sutdent_ID,&student[i].seat1,&student[i].seat2);
	}
	scanf("%d", &n);
	for (j = 0; j < n; j++)
	{
		scanf("%d",&Iint[j]);
	}
	for (j = 0; j < n; j++)
	{
		int M;
		for (i = 0; i < a; i++)
		{
			if (Iint[j] == student[i].seat1)
			{
				M = i; break;
			}
		}
		printf("%s %d\n",student[M].sutdent_ID,student[M].seat2);
	}
	return 0;
}
