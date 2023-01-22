#include "stdio.h"
#include "string.h"
void main()
{
    //字符串就是一串字符——用双引号括起来的一串字符
    //字符串的结束标志是/0
    //字符数组——数组是一组相同类型的元素
    char arr[]= "hello";
    //字符串在结尾位置隐藏了一个\0字符，是结束标志
    char arr1[]="abc";
    char arr2[]={'a','b','c'};
    //求字符串长度
    int len=strlen("abc");//求长度时不包含\0 需要引用头文件 #include "string.h"
    printf("%d\n",strlen(arr1));//3
    printf("%d\n",strlen(arr2));//随机值
    printf("%d",len);
    printf("%s\n",arr1);
    printf("%s\n",arr2);//会显示错误乱码，因为没有使用\0收尾

}