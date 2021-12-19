#include<stdio.h>

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertdata(int arr[],int size,int capasity,int data,int index){\
   
   if(size>=capasity){
       printf("do not process\n");
   }
    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=data;
}
int main(){
    int arr[20]={2,3,4,5,6,7,8};
    int size=7;
    int capasity=20,index=4,data=50;
    
    display(arr,size);
    
    insertdata(arr,size,capasity,data,index);
    size +=1;
    display(arr,size);
    
    return 0;
}