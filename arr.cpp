#include<iostream>
using namespace std;

void printarr(int arr[], int size){

    for(int i=0;i<=size;i++){

        cout<<arr[i]<<endl;
    }
}

int main(){

    int num[15] ={ 1,2,3,4,5,6,7,8,1,2,3};
    // cout<<"the value at index 1 is "<< num[3]<<endl;
    cout<<" everyting is good"<<endl;
     int n=15;

     printarr(num ,n);

     cout<<"working fine"<<endl;
    
}
