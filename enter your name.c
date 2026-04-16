#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{  
    // 1. 学号用整型，姓名用【字符数组】(字符串)
    //int number = 0;
    //char name[20];  // 定义可以存20个字符的姓名（支持中文/英文）

    //printf("Please enter your student number:\n");
    //%d读数字，%s读字符串，空格分隔即可
    //scanf("%d", &number);

    //printf("Please enter your name:");
    //scanf("%s", name);  // 字符串变量直接用变量名，不用加&

    
    //printf("Your student number: %d\n", number);
    //printf("Your name: %s\n", name); //If you want to enter a name,use %s to read it, and use %s to print it

    //int number = 0;
    //char name[15];//有这个才能储存姓名，否则会出问题

    //printf("Please enter your student number:\n");
    //scanf("%d",&number);

    //printf("Please enter your name:");
   // scanf("%s",name);

    //printf("Your student number is:%d\n",number);
    //printf("Your name is:%s\n",name);

    //int a = 11;
    //int b = 12;
    //printf("a>b=%d\n", a > b);//为假，输出0
    //printf("a<b=%d\n", a < b);//为真，输出1
   // printf("a>=b=%d\n", a >= b);//为假，输出0
    //printf("a<=b=%d\n", a <= b);//为真，输出1
    //printf("a!=b=%d\n", a != b);//为真，输出1
    //printf("a==b=%d\n", a == b);//为假，输出0
    //运算符的结果是一个整数，1表示真，0表示假

    //按位取反,是~符号
    //int a = 1;
    //int b = ~a;//按位取反，1的二进制是0000 0001，取反后是1111 1110，十进制是-2
    //int c = 10;
    //int d = ~c;
    //printf("%d\n",b);
    //printf("%d\n",d);//按位取反小技巧，~a=-（a+1）


    //按位异或^，对应比特位不同则为1，相同则为0，假如a^b
    //0000 1010
    //0011 0001
    //0011 0111完全符合上述规律，这就是按位异或的结果

    //逗号表达式，从左向右依次计算，最终结果是最后一个表达式的值
    //int a = 1;
    //int b = 2;
    //int c = (a>b,a=b+10,a,b=a+1);//a>b为假，结果是0，a=b+10的结果是12，a的值变成12,b的值变成13，最后一个表达式是b=a+1，a的值是12，所以b的值变成13，最终c的值是13
    //printf("c=%d\n",c);

   /*    int a;
    scanf("%d",&a);
    if (a % 2 == 1)
    {
        printf("%d是一个奇数",a);
    }*/


    //来一个增强版if else语句
/*    int a;
    while (scanf("%d", &a)!=EOF)//刚才这里输入了中文括号，导致花括号一直报错，要注意输入法
        {

               if (a % 2 == 1)
               {
                   printf("%d是一个奇数", a);
               }
               else
               {
                   printf("%d是一个偶数");
               }
        }*/

    //if else 语句 practice
/*    int age;//scanf函数那里莫名其表，顶部已经有#define _CRT_SECURE_NO_WARNINGS了，还是报错，改成scanf_s才没下划绿线
    scanf_s("%d",&age);// while(scanf("%d",&age)!=EOF)可以一直输入年龄，直到输入EOF（Ctrl+Z）结束
    if (age >= 18)
    {
        printf("You are an adult!\n");
    }
    else
    {
        printf("You are a child\n");
    }*/


    //if /else if/else 语句 practice
    //示例：输入一个数据n，如果大于等于10则输出：“n>=10”，若大于等于5小于10则输出：“5<=n<10”，否则输出：“n<5”
/*    int n;
    scanf("%d",&n);// while(scanf("%d",&n)!=EOF)可以一直输入数据。双引号里不要放\n，会导致你必须在数字后跟一个\n才行，比如15\n才能输出结果，太傻了
    if (n >= 10)
    {
        printf("n>=10");
    }
    else if (n >= 5 && n < 10)//这里&&的意思是“并且”也就是两个条件同时成立，大于等于5并且小于10
    {
        printf("5<= n <10");
    }
    else//这里已经是最后一个条件了，直接else就行了，写else（n<5 纯属画蛇添足，会导致报错）
    {
        printf("n<5");
     }*/


// ! 逻辑取反运算符，改变单个表达式的真假  比如： ！真=假，！假=真，这样子
// && 逻辑与运算符，就是并且的意思，两侧的表达式都为真，结果才为真，否则为假
//  ||：逻辑或运算符，就是“或者”的意思，两侧至少有一个表达式为真，则为真，否则为假

//int a = 1;
//printf("%d\n",!a);//!a的意思是逻辑取反，a的值是1，逻辑取反后就是0，输出0
//C语言中，0表示假，非0表示真，无论是-1还是1，只要不是0，都是表示真


//在逻辑与运算符中，有两个表达式，真&&真=真，真&&假=假，假&&真=假，假&&假=假，只要有一个表达式为假，结果就是假，只有两个表达式都为真，结果才为真
/*int month;
scanf("%d",&month);
if (month >= 3 && month <= 5)
{
    printf("春季\n");//
}*/


//在逻辑或运算符中，也有两个表达式，真||真=真，真||假=真，假||真=真，假||假=假，只要有一个表达式为真，结果就是为真，只有两个表达式都为假，结果才为假
/*int month;
scanf("%d", &month);
if (month == 12 || month == 1 || month==2 )//输入2，虽然前面两个表达式都为假，但最后一个表达式为真，所以结果为真，这是逻辑或的特点
{
    printf("冬季\n");//
}*/


/*int month = 0;
int a=1;
scanf("%d", &month);
if (month == 12 || ++a)//当你输入12时，前面一个表达式为真，后面一个表达式就不会执行了，所以a的值还是1；当你输入其他数字时，前面一个表达式为假，后面一个表达式就会执行，a的值就变成2了
{
    printf("冬季\n");
}
printf("%d",a);*/

//practice：判断闰年的算法，输入一个年份year，判断year是否是闰年
//闰年是指能被4整除但不能被100整除的年份，或者能被400整除的年份
/*int year = 0;
while(scanf("%d",&year)!=EOF)
if (year % 4 == 0 && year % 100 != 0)// != 的意思是“不等于”，比如1900/100的余数为0，则这一年不是闰年
{
    printf("%d是闰年\n", year);
}
else if (year % 400 == 0)
{
    printf("%d是闰年\n", year);
}
else
{
    printf("%d不是闰年\n", year);
}*/


//2.3 switch语句
//多分支选择语句：switch语句是一种特殊形式的if else 结构，用于判断条件有多个确定结果的情况。他把多重的else if改成更易用可读性更好的形式

/*int num = 0;//这个没问题
//float num = 0;//switch后的expression必须是整型表达式
scanf("%d",&num);
switch (num)
{
case 1://case后的值，只能是整型常量表达式
    printf("one\n");
    break;//当匹配case1，遇见break就跳出switch语句，不再继续往下执行
case 2:
    printf("two\n");
    break;
default:
    printf("输入错误\n");
    break;
}*/


//3.循环结构
//3.1 while循环
//practice1:print0 from 1 to 10
/*int i = 1;
while (i <= 10)
{
    printf("%d\n",i);
    i++;//i=i+1;i+=1;都是一样的，都是让i的值增加1
}*/

//practice2:输入一个正整数，逆序打印这个整数的每一位数字，比如输入1234，输出4321。简单算法题
/*int n;
scanf_s("%d", &n);//123
while (n != 0)//循环在n=0时结束
{
    printf("%d", n%10);
    n = n / 10;
}*/


//PRACTICE3:求5的阶乘，5!=5*4*3*2*1=120
//上手体验1-5相加
/*int n;
scanf("%d",&n);
int i = 1;
int rem = 0;//用来存储阶乘的结果，初始值为1
while (i <= n)
{
    rem = rem + i;//每次循环都把i加到rem上，最后得到1+2+3+4+5的结果
    i++;//每次循环i+1

}
printf("%d",rem);//这步不能少*/

/*int n;
scanf("%d",&n);
int i = 1;
int rem = 1;//warning，初始值应该是1，因为阶乘的定义是从1开始乘的，如果初始值是0导致结果为0
while (i <= n)
{
    //这里是在求阶乘
    rem = rem * i;
    //循环条件发生变化，此时++操作
    i++;
}
printf("%d",rem);*/


//课堂解答char问题（easy
/*char a;
scanf("%c",&a);

char c;
scanf("%c",&c);//%c是处理char类型专用，不能用%d
printf("%c,%c",a,c);//如果输入a空格b（a b），会导致实际读取的是空格，就是计算机会读取a以及他的后一格空间的数据，直接输入ab就发现是正常的*/

/*char a;
scanf("%c", &a);
getchar();//吃掉一格，比如输入ab，只会输出a。如果输入a空格b，正常输出a，b，因为getchar（）会吃掉a后面的一格空间
char c;//btw，getchar只能吃掉一格空间，几个getchar（）就吃几个空间
scanf("%c", &c);
printf("%c,%c", a, c);
*/



        return 0;
}