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

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	//输入函数	
//	scanf("%d%d",&num1, &num2);//&取地址符号
//	//c语音语法规定，变量要定义在当前代码块的最前面
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
//	//extern 调用外部文件全局变量
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

////define常量
//#define MAX 10
//int main()
//{
//	printf("%d", MAX);
//	return 0;
//}

////枚举 - enum //自带默认值
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SELECT
//};
////MALE FEMALE SELECT - 枚举常量
//
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d", s);
//	return 0;
//}

//字符串结束标志 - '\0' 转义字符 不算字符串内容
int main() 
{
	char arr1[] = "abc";
	char arr2[] = {97,'b','c','\0'};

	printf("%s\n", arr1);
	printf("%s\n", arr2);

	//strlen() - 计算字符串长度

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	printf("D:\\vs_project\\a2021_1_14\n");

	//\ddd - 8进制转10进制  ascii码值
	//\xdd - 16进制转10进制 ascii码值
	printf("\132\n");
	printf("\x61\n");

	return 0;
}