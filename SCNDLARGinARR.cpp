// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        
        int largest=arr[0];
        int secondlarg=INT_MIN;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>largest){
                secondlarg=largest;
                largest=arr[i];
                
        
            }
            
            else if(arr[i]<largest  &&  arr[i]>secondlarg){
                secondlarg=arr[i];
            }
        }
        
        
        return secondlarg;
      
        // Code Here
    }
};
