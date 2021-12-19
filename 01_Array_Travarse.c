#include<stdio.h>
 void travarsal(int arr[],int size){
     for(int i=0;i<size;i++){
         printf("%d ",arr[i]);
     }
 }
int main(){

    int arr[]={2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(int);
    travarsal(arr,size);
    return 0;
}