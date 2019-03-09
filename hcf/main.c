#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,flag=0,c,d,i;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        for(i=b;i>0;i--)
        {
            c=b%i;
            d=a%i;
            if(c==0 && d==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d\n",i);
        }
    }
    else if(b>a)
    {
        for(i=a;i>0;i--)
        {
            c=a%i;
            d=b%i;
            if(c==0 && d==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
