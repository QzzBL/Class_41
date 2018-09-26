#include <stdio.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS



//每种类型所占的字节数
//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(long double));//8
//	printf("%d\n", sizeof(int*));//4
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d %d",&a, &b);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}
//
////写成函数
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b;
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个操作数： ");
//	scanf("%d %d",&a,&b);
//	sum = Add(x, y);
//	printf("sum = %d\n",sum);
//	return 0;
//}
//
//int main()
//{
//	printf("%c\n",'\f');
//	system("pause");
//	return 0;
//	

//打印0-9
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//		if ((i != 9))
//		{
//			printf(",");
//		}
//		
//	}
//	printf("\n");
//	system("pause");
//	return 0;


//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	while (i < 10)
//	{
//		printf("%d,",arr[i]);
//	}
//}
//}
//}


//typedef 定义类型，理解为类型重命名
//typedef unsigned int uint_32;
//
//int main()
//{
//	//观察num1 和num2，这两个变量的类型是一样的
//	unsigned int num1 = 0;
//	uint_32 num2 = 0;
//	system("pause");
//	return 0;
//}

//define
//#define MAX 100
//int main()
//{
//	printf("%d\n",MAX);
//	system("pause");
//	return 0;
//}


//static 有3种用法
//1.修饰局部变量：修改变量的生命周期为整个程序
//2.修饰全局变量：修改变量的作用域为当前文件
//3.修饰函数：修改函数的作用域为当前文件
//void test()
//{
//	static int i = 0;//加上static 打印 “1-10”，不加打印全部打印“1”
//	i++;
//	printf("%d", i);
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//
//	system("pause");
//}

//static 2 的用法
//变量的声明
//extern int g_count; //g_count 存在于test_01.c
//int main()
//{
//	printf("%d\n",g_count);
//	system("pause");
//	return 0;
//}

//static 3 的用法

//extern Add(int x, int y);//Add(int x , int y);存在于test_02.c
//int main()
//{
//	printf("%d\n",Add(10,20));
//	system("pause");
//	return 0;
//}

//指针这一板块 p叫指针变量，用来存放地址，加上*后表示*p找到&num中存放的内容
int main()
{
	int num = 10;
	int* p = &num;
	
	printf("%d",*p);
	system("pause");
	return 0;
}