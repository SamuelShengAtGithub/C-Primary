#include "stdio.h"
void main()
{
    //数组——一组相同类型元素的集合
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    while(i<10)
    {
        printf("%d\n",arr[i]);
        i++;
    }
    char ch[5]={'a','b','c'};//不完全初始化，剩余被定义为0

}