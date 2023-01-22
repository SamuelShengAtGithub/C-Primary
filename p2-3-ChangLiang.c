#include "stdio.h"
#define MAX 100
void main()
{
    //常量
    //字面常量
    //3.14;
    //'a';
    //const修饰的常变量
    const int num=10;
    //num=20;会报错
    //具有常属性，但仍是变量 
    //#define 定义的标识符常量
    int n=MAX;
    printf("%d\n",n);
    //枚举常量
    //可以一一列举的常量
    enum Sex
    {
        //枚举类型变量未来可能取值
      MALE,FEMALE,SECRET  //可以在此对其进行赋初值 MALE=3，
    };
    enum Sex s=MALE;
    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);
    //默认从0开始
    // 0
    // 1
    // 2
}