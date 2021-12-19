#include<iostream>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int midindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[midindex]){
                swap(arr[j],arr[i]);
                

            }
        }

    }
}
int main(){
    int arr[7]={31,11,19,32,2,54,1};
    int size=7;
    display(arr,size);
    
    bubblesort(arr,size);
    display(arr,size);
    return 0;
}