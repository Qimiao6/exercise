#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", i);
//	return 0;
//	}
//#include<stdio.h>
//int main()
//{
//	int ib = 0;
//	scanf("%d", &ib);
//	printf("%d", ib);
//	return 0;
//	}
//#include<stdio.h>
//int main()
//{
//	printf("Name Age Gender\n");
//	printf("---------------------\n");
//	printf("Jack 18 man\n");
//	return 0;
//	}

//const修饰的常变量

//#include<stdio.h>
//int main()
//{
//	int ss = 10;
//	ss = 20;//ss为变量可以修改
//	printf("%d\n", ss);
//	const int yy = 10;
//	//yy = 20;//无法运行，yy加了const后无法修改，具有了常量的不可修改的属性
//	printf("%d\n", yy);
//	return 0;
// }
// 
// #define定义的值
//  
//#define gg 11
//#include <stdio.h>
//int main()
//{
//	//gg = 10;//gg无法更改，#define定义的值为常量
//	printf("%d", gg);
//	return 0;
//	}

//字符串
//#include<stdio.h>
//int main()
//{
//	char ii[] = { "abcd" };//数组中字符串'\0'（结束标志）
//	char oo[] = { 'a','b','c' };//数组中字符不会自带'\0',所以只会随机结束,直到搜索到‘\0’
//	char hh[] = { 'a','b','c','\0' };//给数组中字符加上'\0'后，运行正常到\自动结束
//	printf("%s\n", ii);
//	printf("%s\n", oo);
//	printf("%s\n", hh);//hh中\0是转义字符，只起结束作用，不占数组大小
//	return 0;
//	}
// 
// 转义字符
//
//#include <stdio.h>
//int main()
//{
//	printf("ss\tijiw\t\n");//此时\t为转义字符，无法打印出我们想要的字符串
//	printf("ss\\tijiw\\t");//要想完整打印，只需在\前面再加一个\即可
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	//printf("\a\a\a");
//	printf("%c\n",'\130');//130前面的\表示后面的三个数为8进制数
//		return 0;
//	}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	i = '\12';//12前面的\表示后面的三个数为8进制数
//	printf("%d\n", i);//所以这里打印出10
//	i = '\7';//7前面的\表示后面的三个数为8进制数
//	printf("%d\n", i);//所以这里打印出7
//	i = '\122';//122前面的\表示后面的三个数为8进制数
//	printf("%d\n", i);//所以这里打印出82
//	i = '\1222';//注意8进制用法，\后面只能输入三个8进制数
//	printf("%d\n", i);//所以超了三个后打印出来的不是预期的结果
//	return 0;
//}

//16进制转义字符
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", '\x30');//\xdd用来表示两个16进制数字
//	return 0;//只能跟两位以内多了会报错
//	}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", strlen("c:ss\thui\128\tfjgd"));//\t为一个转义字符，\12是一个8进制字符
//	return 0;//所以字符长度为15
//}
//#include<stdio.h>
//int main()
//{
//	int dd = 0;
//	printf("你要好好学习吗？\n");
//	printf("0:好好学习   1:不需要\n");
//	scanf("%d", &dd);
//	if(0==dd)
//		printf("好工作\n");
//	else
//	printf("卖红薯\n");
//	return 0;

	//}\
//循环语句
//#include<stdio.h>
//int main()//int ,是返回类型，main是函数名
//{
//	int i = 0;
//	while(i<20000)
//	{
//		printf("努力学习%d\n",i);
//		i++;//括号当中的为函数体
//	}
//	printf("好工作");
//	return 0;
//}

//写一个加的程序

//#include<stdio.h>
//int main()
//{
//	int hh = 0;
//	int hh1 = 0;
//	printf("请输入两个要相加的值中间用空格隔开\n");
//	scanf("%d %d", &hh, &hh1);
//		int hh2 = hh + hh1;
//		printf("%d\n", hh2);
//	}

//调用函数进行加减法运算
//
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int bb = 0;
//	bb = x + y;
//	return bb;
//	}
//int main()
//{
//	//extern int Jian;
//	int hh = 0;
//	int hh1 = 0;
//	printf("请输入两个要相加的值\n");
//	scanf("%d%d", &hh, &hh1);
//	int hh2 = Add(hh, hh1);//调用函数相加
//	 int mm = Jian(hh, hh1);//调用同一个源文件中不同.c文件中的函数
//	printf("%d\n", mm);
//	printf("%d\n", hh2);
//	return 0;
//	}

//数组

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4 };//如果[]中不填常量那这个数组大小，据{}中所包含的数决定
//	int arr[10] = { 1,2,3,4 };//如{}中数组小于[]中的数，那未赋值的数默认为0
//
//	}

//打印数组中的每一个元素

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i <= 9)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//
//	}

//方式二

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int b = 0;
//	b = (sizeof(arr) / sizeof(arr[1]));
//	printf("%d\n", b);
//	while (i < b)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//
//}

//输入数组值并打印
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int b = 0;
	int c = 0;
	b = (sizeof(arr) / sizeof(arr[1]));
	while(c<b)
	{
		scanf("%d", &arr[c]);
			c++;
	}
	printf("数组大小=%d\n", b);
	while (i < b)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;

}

