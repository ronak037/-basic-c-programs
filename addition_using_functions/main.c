#include <stdio.h>
#include <stdlib.h>
int extract(int a);
int add(int x,int y);
int main()
{
    int num,l1,l2,d,result;
    printf("Enter number:");
    scanf("%d",&num);
    l1=extract(num);
    d=num/10;
    l2=extract(d);
    result=add(l1,l2);
    printf("Addition is %d",result);
    return 0;
}
int extract(int a){
    return(a%10);
}
int add(int x,int y){
    return x+y;
}
