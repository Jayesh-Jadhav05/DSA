#include<iostream>
using namespace std;

void display_array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(int arr[],int size){
    int key,j;
    // loops for passes
    for(int i = 1;i <= size-1 ; i++){
        key = arr[i];
        j = i-1;

        //Loop for each pass
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int array[]={21,2,64,6,69};
    int size = 5;
    display_array(array,size);
    insertion_sort(array,size);
    display_array(array,size);
    return 0;
}
