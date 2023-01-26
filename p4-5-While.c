#include "stdio.h"
void main()
{
    int i=1;
    while(i<=10)
        {
            if(i==5)
                break;//在while中break表示永久跳出循环
                //continue
            printf("%d ",i);
                i++;
        }
}