#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int month,day,s;
	printf("請輸入月份:");
	scanf("%d",&month);
	printf("請輸入日期");
	scanf("%d",&day);
	
	s = (month*2+day)%3;
	
	if(s=0)
	{ 
	printf("你的運勢為普通");
	}
	else if(s=1)
	{ 
	printf("你的運勢為吉");
	}
	else if(s=2)
	{ 
	printf("你的運勢為大吉");
	}	 
} 
