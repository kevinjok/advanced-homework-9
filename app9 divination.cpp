#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int month,day,s;
	printf("�п�J���:");
	scanf("%d",&month);
	printf("�п�J���");
	scanf("%d",&day);
	
	s = (month*2+day)%3;
	
	if(s=0)
	{ 
	printf("�A���B�լ����q");
	}
	else if(s=1)
	{ 
	printf("�A���B�լ��N");
	}
	else if(s=2)
	{ 
	printf("�A���B�լ��j�N");
	}	 
} 
