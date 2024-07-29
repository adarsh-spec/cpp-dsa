#include<iostream>
using namespace std;

void reverse(int arr[], int size){
       int start=1;
       int end=size-1;
   
        while(start<=end){
        swap(arr[start], arr[end]);
         start++;
         end--;
       }
}

void printarray(  int arr[],int size ){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[4]={1,8,4,9};
    int brr[7]={5,6,3,7,8,2,9};

    reverse(arr,4);
    reverse(brr,7);

    printarray(arr, 4);
    cout<<endl;
    printarray(brr,7);


    return 0;
}