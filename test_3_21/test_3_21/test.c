#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//将3个数从大到小的顺序输出
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);//a=1,b=2,c=3
//	if (a < b)//确保三个数按a到c从大到小依次输出
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}   
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b; 
//		b = c;
//		c = tmp;
//	}
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}
//int main()//打印1-100之间3的倍数
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()//打印1000-2000之间的闰年
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{//是4的倍数且不是100的倍数 或者是400的倍数
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
////int main()//辗转相除法
////{
////	int m = 24;//求最大公约数，最大公约数最大不会超过两个数中的较小者
////	int n = 18;
////	int r = 0;
////	while (r=m%n)//余数为r
////	{
////		m = n;
////		n = r;
////	}
////	printf("最大公约数=%d\n", n);
////	return 0;
////}
////int main()
////{
////	int m = 24;
////	int n = 18;
////	int min = (m > n ? n : m);
////	while (1)
////	{
////		if (m%min == 0 && n%min == 0)
////			break;
////		min--;
////	}
////	printf("最大公约数:%d", min);
////	return 0;
////}
////int main()
////{
////	int i = 1000;
////	int count = 0;
////	while (i<= 2000)
////	{
////		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
////		{
////			printf("%d ", i);
////			count++;
////		}
////		i++;
////	}
////	printf("count=%d", count);
////	return 0;
////}
//int main()//打印100-200之间的素数
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)//产生2-i-1之间的数字，那它去试除i，如果整除i不是素数
//	{
//		int j = 2;
//		while (j < i)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (i==j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()//1-100出现多少个9
//{
//	int i = 0;
//	int count = 0;
//	while (i <= 100)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("count=%d", count);
//	return 0;
//}
//int main()//
//{
//	int i = 1;
//	double sum = 0;
//	while (i<=100)
//	{
//		if (i % 2 == 0)
//		{
//			sum = sum - (1.0 / i);
//		}
//		else(i % 2 != 0);
//		{
//			sum = sum +(1.0 / i);
//		}
//		i++;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}
//求10个整数中最大值
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int arr[10] = { 0 };
//	scanf
//	for (i = 0; i <= 10; i++)
//	{
//		if (arr[i] > arr[i + 1])
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}
//
//
//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar();
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}
//求两个数的最大公约数
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int min = (m > n ? n : m);
//	while (1)
//	{
//		if (m%min == 0 && n%min == 0)
//		{
//			break;
//		}
//			min--;
//	}
//	printf("最大公约数:%d", min);
//	return 0;
//}er
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 7;//数组下标从0开始
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算出元素个数
//	int i = 0;
//	for (i = 1; i <sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到，下标为%d", i);
//			break;
//		}
//			
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()//在有序数组中寻找一个要找的数
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//二分法/折半查找法
//	int sz = sizeof(arr) / sizeof(arr[0]);//算出元素个数
//	int left = 0;
//	int right = sz - 1;
//	int k = 17;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//在一个有序数组中找到一个要找的数
//int main()
//{
//	int arr[] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = sz - 1;//元素个数-1，即为right的下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//这里算出的是mid的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//}
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	int len = strlen(arr1);
//	//int sz = sizeof(arr1) / sizeof(arr[0]);
//	int right = len - 1;
//	//int right = sz - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);//睡眠函数，单位是ms   S需要大写
//		system("cls");//cls清屏
//	}
//
//	return 0;
//}
//#include <string.h>
////int main()
//{ 
//	int i = 0;
//	char password[10] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (0 ==strcmp( password, "123456"))//两个字符串比较大小，不能直接用==；而应该使用strcmp( , )--string compare
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码输入错误，退出程序 \n");
//	}
//	return 0;
//}
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void menu()
{
	printf("***************************\n");
	printf("***  1. play   0.exit   ***\n");
	printf("***************************\n");
}
void game()
{
	int guess = 0; 
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d\n", &guess);
		if (guess>ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//只调用一次，不能频繁使用
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}