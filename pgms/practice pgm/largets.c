#include<stdio.h>
int returnmax(int array[],int val)
{
    int max;
    for(int i=0;i<val;i++)
    {
        if(array[i]<max)
        {
           max=array[i];
        }
    }
    
    return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,89,9};
    int max=returnmax(arr,9);
    printf("%d",max);
    return 0;
}
