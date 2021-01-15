#define _CRT_SECURE_NO_WARNINGS

//调用库函数文件
//stdio-standard input output
#include <stdio.h> 

//int 整型-表示main函数调用返回一个整型值
//void是过时写法
//int main()//主函数-程序入口-有且仅有一个
//{
//	//这里完成任务
//	//printf("hellow world\n");
//
//	char ch = 'A';
//	printf("%c\n",ch);//%c - 打印字符格式数据
//
//	int age = 20;
//	printf("%d\n", age);//%d - 打印整形十进制数据
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
//	return 0;//返回 0
//}

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	//输入函数	
	scanf_s("%d%d",&num1, &num2);//&取地址符号
	//c语音语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum = %d\n", sum);


	return 0;
}