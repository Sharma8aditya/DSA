class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while(i<n-1 && arr[i] < arr[i+1]){          //strictly incresing condition
            i++;
        }
        
        //check if i is not at start or end of the array
        if(i==0 || i == n-1){
            return false;
        }
        
        //check for stricty decreasing 
        while(i<n-1 && arr[i] > arr[i+1]){
            i++;
        }
        
        //check if i reaches the end of the array or not
        return(i==n-1);
    }
};