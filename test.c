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

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//���뺯��	
//	scanf("%d%d",&num1, &num2);//&ȡ��ַ����
//	//c�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//
//	return 0;
//}

//int global = 2021;
//
//void test()
//{
//	printf("text()-%d\n", global);
//}
//
//int main()
//{
//	test();
//	printf("%d\n", global);
//
//	return 0;
//}

//int main()
//{
//	//extern �����ⲿ�ļ�ȫ�ֱ���
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//int main()
//{
//	char arr[10] = {0};
//	scanf("%s", arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

////define����
//#define MAX 10
//int main()
//{
//	printf("%d", MAX);
//	return 0;
//}

////ö�� - enum //�Դ�Ĭ��ֵ
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SELECT
//};
////MALE FEMALE SELECT - ö�ٳ���
//
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d", s);
//	return 0;
//}

//�ַ���������־ - '\0' ת���ַ� �����ַ�������
int main() 
{
	char arr1[] = "abc";
	char arr2[] = {97,'b','c','\0'};

	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//strlen() - �����ַ�������

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	printf("D:\\vs_project\\a2021_1_14\n");

	//\ddd - 8����ת10����  ascii��ֵ
	//\xdd - 16����ת10���� ascii��ֵ
	printf("\132\n");
	printf("\x61\n");

	return 0;
}