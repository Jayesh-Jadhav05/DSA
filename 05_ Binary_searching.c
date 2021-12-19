#include<stdio.h>

int binarysearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mide-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int element=6;
    int g=binarysearch(arr,size,element);
    printf("the %d element found in %d index\n",element,g);

    
    return 0;
}