#include <stdio.h>
#include <conio.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
int isempty(struct stack *s){
    if(s->top==-1){
        return 0;

    }
    else{
        return 0;
    }
}
int isfull(struct stack *p){
    if(p->top==p->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}