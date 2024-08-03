#include<bits/stdc++.h>
using namespace std;
int num(int arr[],int size){
    int ans=0;

    for (int i=0;i<size; i++){
        ans=ans^arr[i];
    };
    for(int i=1;i<size; i++){
        ans=ans^i;


    }

        return ans;


}
int main(){
    int arr[21]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,16};
    

   int ans=num(arr,21);

   cout<<ans<<endl;
    return 0;
}
