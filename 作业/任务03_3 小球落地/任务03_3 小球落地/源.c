//任务03_3 小球落地  2017-04-18截止
//认真阅读下面要求，完成本次任务代码的编写。
//
//
//
//问题描述：
//
//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下。求第10次落地时，总共反弹了多长距离？每次反弹多高？
//
//程序输入：
//
//    无。
//
//程序输出：
//
//    输出小球落下前10次每一次的反弹高度，最后再输出前十次总共反弹高度。反弹高度为浮点数类型，要求小数点后面保留6位有效数字。
//
//输入示例：
//
//    无。
//
//输出示例：
//
//    第1次反弹的高度:50.000000
//
//第2次反弹的高度:25.000000
//
//第3次反弹的高度:12.500000
//
//第4次反弹的高度:6.250000
//
//第5次反弹的高度:3.125000
//
//第6次反弹的高度:1.562500
//
//第7次反弹的高度:0.781250
//
//第8次反弹的高度:0.390625
//
//第9次反弹的高度:0.195313
//
//第10次反弹的高度:0.097656
//
//小球反弹的总高度:99.902344
/**
*任务03_3 小球落地
*姓名：魏谦强
*学号：2016011640
班级：7班
*日期：2017/4/15
*/


#include<stdio.h>
#include<stdlib.h>



int main()
{
        double h=100.00;
		double H=0; 
		int i=1;
		for(i=1;i<11;i++)
		  {
			  h=h/2;
			  printf("第%d次反弹的高度:%f\n",i,h);
			  H=H+h;

		  }
		printf("小球反弹的总高度:%f",H);
		 system("pause");
		return 0;


}