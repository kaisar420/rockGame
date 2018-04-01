/*
author:iparhan
date:4-1-2018
address；Beijing
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
	{
		char gamer;  //玩家
		int computer; //电脑
		int result;  //游戏结果
		
		printf("这是一款简单的剪刀石头布游戏,请输入你要除的拳头 : \n");
		printf("A:剪刀\nB:石头\nC:布\nD:不玩了\n");
		scanf("%c%*c", &gamer);
			
		//为了防止游戏第一次后就程序结束，设计一个循环继续可以玩
		switch(gamer)
		{
			case 65: //A
			case 97: //a
			gamer=4;
			break;
			
			case 66: //B
			case 98: //b
			gamer=7;
			break;
	
			case 67: //C
			case 99:  //c
			gamer=10;
			break;
		
			case 68:  //D
			case 100: //d
			return 0;
			
			//如果实际情况不符合上述条件 则运行default	
			default:
			printf("你的选择为 %c 选择错误,退出 ...\n ", gamer);
			getchar();
			system("cls"); //清屏
			return 0;
			break;
			
			srand((unsigned) time(NULL)); //生成一个随机数
			computer  = rand() % 3;
			result  = (int)gamer + computer;
			printf("电脑出了");

			//设计一个电脑的循环
			switch(computer)
			{
				case 0:printf("剪刀\n"); break;
				case 1:printf("石头\n"); break;
				case 2:printf("布\n");   break;
			}
		
			printf("你出了");
			switch(gamer)
			{
				case 4:printf("剪刀\n");break;
				case 7:printf("石头\n"); break;
				case 10:printf("布\n");  break;
			}

			if(result == 6 || result == 7 || result == 11)
			{
				printf("玩家您赢了");
			}else if(result == 5 || result == 9 || result == 10)
			{	
				printf("很抱歉，电脑赢了");
			}else
			{
				printf("平手了");
			}	
			system("pause>nul&&cls");
		
		}
		return 0;
	}
