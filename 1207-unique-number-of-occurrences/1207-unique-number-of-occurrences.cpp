class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int i = 0;
        sort(arr.begin(), arr.end());
        vector<int> ans;
        
        //count the frequency
        while(i<arr.size()){
            int count = 1;
            for(int j = i+1;j<arr.size();j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            ans.push_back(count);
            i = i + count;
        }
        
        
        sort(ans.begin(), ans.end());
        
        //check if two elements(frequency) are matching or not in ans vector 
        for(int i = 0; i<ans.size() - 1; i++){
            if(ans[i] == ans[i+1]){
                return false;
            }
        }
        return true;
    }
};