#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
//push opration...




 

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

int main()
{
    struct stack *s;
    s->top = -1;
    s->size = 80;
    s->arr = (int *)malloc(s->size * sizeof(int));
    
    if(isempty(s)){
        printf("stack is empty");
    }    
    if(isfull(s)){
        printf("full aahe stack");
    }
   return 0;
}
