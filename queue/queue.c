#include<stdio.h>
#include<stdlib.h>
//ASSUMED ALL ELEMENTS OF ARRAY ARE ZERO
typedef struct queue
{
    int front,rear;
    int capacity;
    int *array;
}queue;

queue* createqueue(int capacity)
{
    queue* q = (queue*)malloc(sizeof(queue));
    q->front=q->rear=-1;
    q->capacity=capacity;
    q->array = (int*)malloc((q->capacity)*sizeof(int));
    return q;
}

void print(queue* q,int copyoffront)
{
    for(int i=0;i<(q->capacity);i++)
    {
        
        printf("%d ",q->array[copyoffront++]);
    }
}

void enqueue(queue* main,int ele)
{
    int copyoffront;
    if((main->rear+1)%main->capacity==main->front)
    {
        printf("queue is already full !!");
        return;
    }
    main->rear=(main->rear+1)%main->capacity;
    main->array[main->rear]=ele;
    if(main->front==-1)
    {
        main->front=main->rear;
    }
    copyoffront=main->front;
    print(main,copyoffront);
}

void dequeue(queue* main)
{
    int copy;
    if(main->front==main->rear)
    {
        main->front=main->rear=-1;
        printf("queue is already empty!!\n");
        return;
    }
    main->array[main->front]=0;
    main->front=(main->front+1)%main->capacity;
    copy=0;
    print(main,copy);
}

int main()
{
    queue *qptr=(queue*)malloc(sizeof(queue));
    int capacity;
    printf("Enter how many elements you will enter in queue:");
    scanf("%d",&capacity);
    qptr = createqueue(capacity);
    int choice=1;
    while(choice)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter element to insert in queue:");
                    int ele;
                    scanf("%d",&ele);
                    enqueue(qptr,ele);
                    printf("\n");
                    break;
            case 2: dequeue(qptr);
                    printf("\n");
                    break;
            case 3: exit(0);
        }
    }

    
}
