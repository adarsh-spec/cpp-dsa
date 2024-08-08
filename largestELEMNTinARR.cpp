class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest=arr[0];
        for(int i=1;i<=n-1;i++){
            if(arr[i]>arr[0]){
                arr[0]=arr[i];
                
                largest=arr[0];
            }
        }
        
        return largest;
        
    }
};
