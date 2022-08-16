#include<stdio.h>
#define max 5
int q[max], front=-1, rear=-1;
void main()
{
    int ch;
    void insert();
    void delete();
    void display();
    printf("\nCircular Queue operations\n");
    printf("1. insert\n2. delete\n3. display\n4. exit\n");
    while(1)
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("Invalid option\n");
        }
    }
}
void insert()
{
    int x;
    if((front==0&&rear==max-1)||(rear+1==front))
        printf("Queue is overflow\n");
    else
    {
        printf("Enter element to be insert:");
        scanf("%d",&x);
        if(rear==-1)
            front=0,rear=0;
        else if(rear==max-1)
            rear=0;
        else
            rear++;
        q[rear]=x;
    }
}
void delete()
{
    int a;
    if(front==-1)
        printf("Queue is underflow\n");
    else
    {
        a=q[front];
        if(front==rear)
            front=-1,rear=-1;
        else if(front==max-1)
            front=0;
        else
            front++;
        printf("Deleted element is %d\n",a);
    }
}
void display()
{
    int i,j;
    if(front==-1&&rear==-1)
        printf("Queue is underflow\n");
    else if(front>rear)
    {
        for(i=front;i<max;i++)
            printf("\t%d",q[i]);
        for(j=0;j<=rear;j++)
            printf("\t%d",q[j]);
    }
    else
    {
        for(i=front;i<=rear;i++)
            printf("\t%d",q[i]);
    }
    printf("\n");
}
