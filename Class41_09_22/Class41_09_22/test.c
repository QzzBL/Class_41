#include <stdio.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS



//ÿ��������ռ���ֽ���
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
//	printf("������������������>");
//	scanf("%d %d",&a, &b);
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}
//
////д�ɺ���
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
//	printf("������������������ ");
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

//��ӡ0-9
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


//typedef �������ͣ����Ϊ����������
//typedef unsigned int uint_32;
//
//int main()
//{
//	//�۲�num1 ��num2��������������������һ����
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


//static ��3���÷�
//1.���ξֲ��������޸ı�������������Ϊ��������
//2.����ȫ�ֱ������޸ı�����������Ϊ��ǰ�ļ�
//3.���κ������޸ĺ�����������Ϊ��ǰ�ļ�
//void test()
//{
//	static int i = 0;//����static ��ӡ ��1-10�������Ӵ�ӡȫ����ӡ��1��
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

//static 2 ���÷�
//����������
//extern int g_count; //g_count ������test_01.c
//int main()
//{
//	printf("%d\n",g_count);
//	system("pause");
//	return 0;
//}

//static 3 ���÷�

//extern Add(int x, int y);//Add(int x , int y);������test_02.c
//int main()
//{
//	printf("%d\n",Add(10,20));
//	system("pause");
//	return 0;
//}

//ָ����һ��� p��ָ�������������ŵ�ַ������*���ʾ*p�ҵ�&num�д�ŵ�����
int main()
{
	int num = 10;
	int* p = &num;
	
	printf("%d",*p);
	system("pause");
	return 0;
}