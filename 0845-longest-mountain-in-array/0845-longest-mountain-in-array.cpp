class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        //move from 1 to n-2  because last element can't be the peak in the array
        int ans = 0;
        for(int i = 1; i<=n-2;){
            if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){      //peak condition
                int count = 1;           //1 to count peak also
                int j = i;
                
                //traverse along the left side of peak element
                while(j > 0 && arr[j] > arr[j-1]){
                    j--;
                    count++;
                }
                
                //traverse along the right side of th peak element
                while(i<n-1 && arr[i] > arr[i+1]){
                    i++;
                    count++;
                }
                ans = max(ans, count);
            }
            
            //if peak condition isn't there keep incrementing the i
            else{
                i++;
            }
        }
        return ans;
        
    }
};