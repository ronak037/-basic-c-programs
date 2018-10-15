#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=1+(i-1)*2;j++)
        printf("%d",k%10);
    k++;
    printf("\n");
    }
    return 0;
}
