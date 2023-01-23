#include "stdio.h"
void main1()
{
    //指针
    //1.内存是怎么编号的
    //物理地址线-通电
    //2.一个这样的内存单元是多大空间
    //1字节
    int a=10;//a在内存中分配4个字节
    printf("%p\n",&a);//%p打印地址
    int *pa=&a;//pa用来存放地址，再c语言中pa叫指针变量
    //*说明pa是指针变量
    //int说明pa执行的对象是int 类型的
    char ch='wz';
    char *pc=&ch;
}
void main()
{
    int a=10;
    int *pa=&a;
    *pa=20;//*解引用操作 *pa就是通过pa里的地址，找到a
    printf("%d\n",a);

    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(long*));
    printf("%d\n",sizeof(long long*));
    printf("%d\n",sizeof(float*));
    printf("%d\n",sizeof(double*));
}
