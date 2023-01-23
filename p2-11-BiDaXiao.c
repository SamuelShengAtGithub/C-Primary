#include "stdio.h"
void main()
{
    int a,b;
    printf("请输入a,b\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d",a);
    else
        printf("%d",b);
}