#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//��3�����Ӵ�С��˳�����
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d%d%d", &a, &b, &c);//a=1,b=2,c=3
//	if (a < b)//ȷ����������a��c�Ӵ�С�������
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
//int main()//��ӡ1-100֮��3�ı���
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
//int main()//��ӡ1000-2000֮�������
//{
//	int i = 1000;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{//��4�ı����Ҳ���100�ı��� ������400�ı���
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}
////int main()//շת�����
////{
////	int m = 24;//�����Լ�������Լ����󲻻ᳬ���������еĽ�С��
////	int n = 18;
////	int r = 0;
////	while (r=m%n)//����Ϊr
////	{
////		m = n;
////		n = r;
////	}
////	printf("���Լ��=%d\n", n);
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
////	printf("���Լ��:%d", min);
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
//int main()//��ӡ100-200֮�������
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)//����2-i-1֮������֣�����ȥ�Գ�i���������i��������
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
//int main()//1-100���ֶ��ٸ�9
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
//��10�����������ֵ
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
//�������������Լ��
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
//	printf("���Լ��:%d", min);
//	return 0;
//}er
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 7;//�����±��0��ʼ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int i = 0;
//	for (i = 1; i <sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ����±�Ϊ%d", i);
//			break;
//		}
//			
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main()//������������Ѱ��һ��Ҫ�ҵ���
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//���ַ�/�۰���ҷ�
//	int sz = sizeof(arr) / sizeof(arr[0]);//���Ԫ�ظ���
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//��һ�������������ҵ�һ��Ҫ�ҵ���
//int main()
//{
//	int arr[] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = sz - 1;//Ԫ�ظ���-1����Ϊright���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�����������mid���±�
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
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//		Sleep(1000);//˯�ߺ�������λ��ms   S��Ҫ��д
//		system("cls");//cls����
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (0 ==strcmp( password, "123456"))//�����ַ����Ƚϴ�С������ֱ����==����Ӧ��ʹ��strcmp( , )--string compare
//		{
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("����������������˳����� \n");
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
		printf("�������:>");
		scanf("%d\n", &guess);
		if (guess>ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ֻ����һ�Σ�����Ƶ��ʹ��
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}