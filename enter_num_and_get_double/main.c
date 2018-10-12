#include <stdio.h>
#include <stdlib.h>

main()
{
    printf("Enter any real number then press enter and you will get double of it: ");
    float realnum;
    scanf("%f", &realnum);
    printf("Your answer is: %f\n",realnum+realnum);
    return 0;
}
