#include<iostream>
using namespace std;


void printArray(int* arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void slectionsort(int* arr,int n){
    for(int i=0;i<n-1;i++){
        int midindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[midindex]){
                midindex=j;
            }
            
        }
        swap(arr[midindex] ,arr[i]);
    }
}
int main(){
    
  int arr[6]={44,32,64,33,1,4};
  int n=6;
   printArray(arr,n);
   slectionsort(arr,n);
   printArray(arr,n);

    return 0;
}