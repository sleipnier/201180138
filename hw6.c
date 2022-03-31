#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"head.h"
int main()
{
	srand((unsigned)time(0));
	int num;
	int guess;//用户猜数 
	int right;//正确答案 
	int count;//已猜 
	char c='b';
	while(c!='n'&&c!='N')
	{
		count = 0;
		right = 0;
		num=NUM;
		printf("\n我现在有一个在1-1000内整数，请猜一猜（仅有10次机会）:");
		while(count++ < 10){
		scanf("%d",&guess); 
		if(guess == num)
		{
			right = 1;
			printf("恭喜猜对！\n");break;
		}			
		else if(guess>num)
			printf("你猜的有些大了.\n");
		else
			printf("你猜的有些小了.\n");
		}
	if(right == 0)
		printf("已经尝试10次了，失败\n");
	printf("是否继续？y(继续)/n（退出）:");
	getchar();
        scanf("%c",&c);
	}
	return 0;
}

