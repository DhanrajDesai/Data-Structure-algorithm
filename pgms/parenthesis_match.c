#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    char *arr;
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

char parenthesis(char * exp){
    struct stack * sp;
    
    sp->size=100;
    sp->top=-1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));


    for (int i = 0; i <'\0'; i++)
    {
            if(exp[i]=='(')
            {
                push(sp,'(');
            }
            else if((exp==')'))
            {
                
                    if(isempty(sp))
                    {
                        return 0;
                    }
                
                pop(sp);
            }


    }
    if(isempty(sp)){
        return printf("done");
    }
    else{
        return 0;
    }
    
}

int main()
{
    char * exp="3(45)(";
    if(parenthesis(exp)){
        printf("matched");
    }
    else{
        printf("NO matching parenthesis");
    }

    return 0;
}
