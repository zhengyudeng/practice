#include <stdio.h>

void main(void)
{
    printf("hello world\r\n");
    int i = 0;
    while(1)
    {
        printf("i = %d\r\n", i++);
        if(i == 5)
        {
            i = 0;
        }
    }
    
    return ;
}
