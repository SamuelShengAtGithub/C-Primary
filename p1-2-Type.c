#include "stdio.h"
void main()
{
    //字符类型
    char ch='a';
    //整型
    int age1=20;
    //短整型
    short int age2=20;
    //单精度
    float age3=20;
    //双精度
    double age4=20;
    //sizeof-关键字-操作符-计算类型或者变量所占大小
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    // 1
    // 2
    // 4
    // 4
    // 8
    // 4
    // 8
    //计算机中的单位
    //bit 比特位
    //byte 字节 =8bit
    //kb=1024byte
    //mb=1024kb
    //gb=1024mb
    //tb=1024gb
}