#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k=0;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",k%2);
            k++;
            }
        printf("\n");
    }
    return 0;
}
