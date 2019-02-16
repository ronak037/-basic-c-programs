#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,flag=0;
    printf("Enter size:");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter %d element ",i+1);
        scanf("%d",&a[i]);
    }

    int key;
    printf("enter what number u wanna:");
    scanf("%d",&key);

    for(int i=0,j=size-1;i!=j-1;){
        int middle;
        middle=(i+j)/2;
        if(key>a[middle]){
            i=middle;
        }
        else if(key<a[middle]){
            j=middle;
        }
        else if(key==a[middle]){
            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("found");
    }
    else{
        printf("not found");
    }
    return 0;
}
