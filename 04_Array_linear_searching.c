#include<stdio.h>

int linearsearch(int arr[],int size,int data){


for(int i=0;i<size;i++){
    if(arr[i]==data){
        return i;
    }
}
return -1;
}
int main(){

    int arr[]={2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    int data=5; 
    int j=linearsearch(arr,size,data);
  printf("the %d element found in %d index number\n",data,j);;
    return 0;
}