///打印100内3的倍数
#include <stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
			i++;
		}
	}
	return 0;
}


///函数实现闰年判断
#include<stdio.h>
int LeapYear(int i)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

int main()
{
	int year;
	scanf_s("%d", &year);
	if (LeapYear(year) == 1)
	{
		printf("是闰年");
	}
	else
	{
		printf("不是闰年");

	}

	return 0;
}


///函数实现交换两个数 通过指针转地址才能实现交换目的，直接传值交换不可取
#include<stdio.h>
int change(int *a,int *b)
{
	int c;
	﻿c = *a;
	*a = *b;
	*b = c;
	return 0;
}
	

int main()
{
	int x ; int y;
	printf("请输入两个数");
	scanf("%d %d", &x, &y);
	change(&x, &y);  ////return 0;
	printf("a=%d,b=%d\n", x, y);
	return 0;
}


///实现9*9乘法口诀表
#include <stdio.h>
int main()
{
	int i;
	int j;
	for (i = 1; i < 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}


///函数实现n*n乘法口诀表
#include<stdio.h>
void kjb(int n)
{
        int i;
		int j;
		for (i = 1; i <=n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf("%d*%d=%2d ", i, j, i*j);
			}
			printf("\n");
		}
	//return 0;
}

int main()
{
	int m;
	printf("请输入你想输的整数");
	scanf_s("%d", &m);
	kjb(m);
	return 0;
}


///函数实现100-200内素数判断
#include<stdio.h>
int Prime()
{


	int i;
	int j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j >= i)
		{
			printf("%d\n", i);
		}

	}
	return 0;
}
int main()
{
	Prime();
	return 0;
}


///实现二分查找（找数字）
#include<stdio.h> 
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key;
	int len = sizeof(arr) / sizeof(arr[0]);


	int left = 0;
	int right = len - 1;


	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("%d\n", mid);
			break;
		}
	}
	if (left <= right)
	{
		printf("找到了！\n");
	}
	else
	{
		printf("没找到！\n");
	}
	return 0；
}
