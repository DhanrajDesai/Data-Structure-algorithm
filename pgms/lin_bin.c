#include <stdio.h>
int linearsearch( int arr[],int size,int elements){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==elements){
            return i;
        }
    }
    return -1;
}
int binarysearch(int arr[],int size,int element){
        int low=0;
        int high=size-1;
        while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
        }
            return -1;
    }

int main(int argc, char const *argv[])
{
    // int arr[]={1,2,23,4,4,55,6,66,6,77,77,7,};
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size=sizeof(arr)/sizeof(int);
    int element=64;
    int result=binarysearch(arr,size,element); 
    printf("Element %d is found at index %d",element,result);
}
