#include<bits/stdc++.h>
using namespace std;

int num(int arr[],int size){
    int ans=0;

    for (int i=0;i<size;i++){
        ans=ans^arr[i];
    }


    return ans;
}; 

int main(){
    int arr[7]={2,4,6,9,2,4,6};

    

    int ans=num(arr,7);
    cout<<ans<<endl;

    return 0;
}
