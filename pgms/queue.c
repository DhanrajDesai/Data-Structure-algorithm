#include<stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int * arr;

};


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int val)
{
    if(isFull(q))
    {
        printf("queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r]=val;
        printf("Enqueued element %d",val);  
    }   
  
}
int dequeue(struct queue * q)
{
        int a=-1;
      if(isEmpty(q)){
        printf("queue is empty....");

    }
    else{
        q->f++;
        a=q->arr[q->f];
        printf("element to be deleted %d",a);
    }
    return a;
}
int main()
{
    struct queue q;
    q.size=5;
    q.f=q.r=0;
    q.arr=(int *)malloc(q.size*sizeof(int));
        enqueue(&q, 12);
        enqueue(&q, 15);
        enqueue(&q, 1); 
            
        dequeue(&q);
        dequeue(&q);
}