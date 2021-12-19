#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void deletdata(int arr[],int size,int index){
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
}
int main(){

    int arr[]={2,4,6,8,10,12,14};
    int size=sizeof(arr)/sizeof(int);
    int index=4;
    display(arr,size);
    deletdata(arr,size,index);
    size -=1;
    display(arr,size);
    return 0;
}