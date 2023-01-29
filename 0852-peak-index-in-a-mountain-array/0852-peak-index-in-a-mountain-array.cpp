class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = (high + low)/2;
            
            if(arr[mid - 1] <= arr[mid] && arr[mid + 1] <= arr[mid]){
                return mid;
            }
            else if(arr[mid-1] >= arr[mid]){
                high = mid;
            }
            else{
                low = mid;
            }
        }
        return -1;
        
    }
};