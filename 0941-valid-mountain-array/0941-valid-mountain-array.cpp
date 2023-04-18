class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while(i<n && i+1<n && arr[i] < arr[i+1]){         //increasing part
            i++;
        }
        
        if(i ==0 || i+1 >= n){         //i == 0 nvere increasing i+1 > n last of array
            return false;
        }
        
        while(i<n && i+1 < n){
            if(arr[i] <= arr[i++ + 1]){         //not striclty decreasing
                 return false;
            }
        }
        return true;
    }
};