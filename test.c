#define _CRT_SECURE_NO_WARNINGS

//���ÿ⺯���ļ�
//stdio-standard input output
#include <stdio.h> 

//int ����-��ʾmain�������÷���һ������ֵ
//void�ǹ�ʱд��
//int main()//������-�������-���ҽ���һ��
//{
//	//�����������
//	//printf("hellow world\n");
//
//	char ch = 'A';
//	printf("%c\n",ch);//%c - ��ӡ�ַ���ʽ����
//
//	int age = 20;
//	printf("%d\n", age);//%d - ��ӡ����ʮ��������
//
//	long num = 100;
//	printf("%d\n", num);
//
//	float f = 5.0;
//	printf("%f\n", f);
//
//	double d = 3.14;
//	printf("%lf\n", d);
//
//	return 0;//���� 0
//}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	//���뺯��	
	scanf_s("%d%d",&num1, &num2);//&ȡ��ַ����
	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum = %d\n", sum);


	return 0;
}