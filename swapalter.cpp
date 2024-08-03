#include<bits/stdc++.h>
using namespace std;


void swap(int arr[],int size) {


    // int size=sizeof(arr);

    for(int i=0;i<size;i+=2){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }

}

void print(int arr[],int size) {

    for (int i=0;i< size;i++) { 
        cout<<arr[i]<<" "; 
        cout<<endl;
        }


}

int main(){
    int arr[10]={2,4,6,2,1,87,65,23,12,9};

    swap(arr,10);
    print(arr,10);

    return 0;
}
