class Solution {
public:
    int removeDuplicates(vector<int>& arr) {

        int arrindex=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[arrindex]){
                arr[arrindex+1]=arr[i];
                arrindex++;
            }
           
        }

        return arrindex+1;
        
    }
};
