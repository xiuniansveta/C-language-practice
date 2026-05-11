//第一章实验：通过scanf输入学号姓名
//要点：整型int放学号，字符数组char放姓
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char num[50];//int可存储的长度是有限的，学号可能超过int的范围，所以用字符数组存储学号
	//用b25050888输出，你会发现直接变成负数，所以用char最好
	char name[50];

	printf("请输入学号:");
	scanf("%s",num);//%s可以接受无论数字还是字母，所以用char直接用%s即可
	printf("请输入姓名:");
	scanf("%s",name);//字符数组本身就是地址，所以不需要取地址

	printf("你的学号为：%s ",num);
	printf("你的姓名为：%s", name);
		return 0;
}*/

//第二章实验：顺序结构程序设计
//第一项
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short int a;
	short int b;
	a = 32767;
	b = a + 1;//short int的范围是-32768~32767，所以a+b会发生溢出，结果变成-32768
	//short int最大值是32767，在此基础上加1会导致溢出反而变成最小值-32768
	printf("a = %d;\n b = %d;\n",a,b);
}*/

//第二项：
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i,x,y;
	float a = 3.14, b = 2.1;
	i = 75.12;//这里实际是75，整型强行赋值为双精度浮点数而已
	x = 7;
	y = 3;
	printf("%d \n%d \n%f \n",i,(int)(a+b),(float)(x/y));其实就是转换
	return 0;
}*/  

//第三项：
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	double x, y;
	i = 4.6;//这里实际是4，整型强行赋值为双精度浮点数而已
	x = 0.96;//这里是0.96，双精度浮点数
	y = x + i;//这里是4.96，i被隐式转换为double类型了
	printf("i=%f \nx=%f \ny=%f \n",i,x,y);//呃，未解之谜，问了千问也是一脸懵逼，反正i=0吧......
	return 0;
}*/

//第四项，难度上涨。设圆的半径为r=1.5，圆柱高h=3，求圆周长，圆球表面积，圆球体积，圆柱体积。请用scanf输入数据
//输出计算结果，输出时要有文字说明，取小数点后两位。
//先复习圆与圆柱相关公式：  周长C=2*PI*r（2派r）； 圆球表面积S=4*PI*r^2（4派r的平方）； 圆球体积V=(4/3)*PI*r^3（4/3乘派r的3次方）； 圆柱体积V=PI*r^2*h（派（r的平方）乘以高） ..copilot输出的公式
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.1415926//3.1415926535,这个是“派”的宏定义，比较方便
int main()
{
	double r, h;
	printf("请输入圆的半径：");
	scanf("%lf",&r);
	printf("请输入圆柱的高：");
	scanf("%lf",&h);

	printf("圆周长C为：%.2f\n",2*PI*r);
	printf("圆柱表面积S为：%.2f\n",4*PI*r*r);//这里不能用r^2，会直接导致报错。因为r^2在这里被看作：“按位异或”（Bitwise XOR）运算符。肯定报错啊，还是古法叠加吧
	printf("圆球体积V为：%.2f\n",(4.0/3)*PI*r*r*r);//我操，这里写4或者4.0答案是不同的，前者是10.60，后者是14.14，因为前者是int，按1来算。后者是浮点，按1.3333来算，我服了
	//这里用4.0/3.0才是正确的，因为现实计算肯定带小数啊，浮点
	printf("圆柱体积V为：%.2f\n",PI*r*r*h);
	return 0;//vs2026可写可不写，会补齐，怪不得不写也没事。坚持写是良好代码习惯，别人一看知道代码在这里结束

}*/

//第三章实验：选择结构程序设计
//第一项：1. 根据学生考试成绩将分数划分为5个档次要求从键盘接收学生成绩，如果：
//成绩在90分以上的，输出“Very Good”。
//成绩在80 - 90之间，输出“Good”。
//成绩在70 - 80之间，输出“Normal”。
//成绩在60 - 70之间，输出“Pass”。
//成绩在60分以下的，输出“Fall”。
//要求输出等级和成绩，并且保留2位小数。

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	double score;
	printf("请输入0-100之间的成绩：");
	scanf("%lf", &score);
	if (score < 0 || score>100)
	{
		printf("请输入范围在0-100之间的成绩");//这个范围检查来自ds，我去，还真没想到能利用score<0和score>100来检查范围，太牛逼了
	}
	else if (score >= 90)
	{
		printf("Very Good");
	}
	else if (score >= 80)
	{
		printf("Good");
	}
	else if (score >= 70)
	{
		printf("Normal");
	}
	else if (score >= 60)
	{
		printf("Pass");
	}
	else
	{
		printf("Fall");
	}
	return 0;
}
//当然，缺点也非常明显，比起ai版本，未能做到范围管理，100以上的数据也能自由输入。之后可以用switch试试，switch，case这个，一一对应