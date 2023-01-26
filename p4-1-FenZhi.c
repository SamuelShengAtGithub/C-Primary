#include "stdio.h"
void main()
{
    //不建议将函数名字写称全大写
    //C语言是结构化程序设计语言
    //顺序结构 选择结构 循环结构
    int age=170;

    if(age<18)
        printf("少年\n");
    else if(age>=18 && age<26)
        printf("青年\n");
    else if(age>=26 && age<=40)
        printf("中年");
    else if(age>=40 && age<=60)
        printf("壮年\n");
    else if(age>=60 && age<=100)
        printf("老年\n");
    else 
        printf("老不死\n");



    // else 
    //     {
    //         printf("未成年\n");
    //         printf("不能谈恋爱\n");
    //     }
        
}