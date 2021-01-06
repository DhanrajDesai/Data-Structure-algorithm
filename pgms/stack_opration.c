#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int *arr;
    int top;
};

int isempty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{

    if (isfull(ptr))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr){
    
    if(isempty(ptr)){
        printf("cannot delete the elemnt");
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
   
}
int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 5;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s,334);
    push(s,335);
    push(s,333);
    push(s,338);
    
    printf("After pushing, Full: %d\n", isfull(s));
    printf("After pushing, Empty: %d\n", isempty(s));
    
    pop(s);
    
    printf("pop %d val from\n" ,pop(s));
    pop(s);
    
    printf("pop %d val from\n" ,pop(s));

    for (int j = 0; j < s->top; j++)
    {
        
        printf("value at index %d is %d",j,peek(s,j));
    }
    





    return 0;



}
