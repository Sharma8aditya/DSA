class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        //take unordered map to store the frequency
        unordered_map<int, int> mp;
        for(int i = 0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        int count = 0;
        for(auto it: mp){
            int freq = it.second;
            if(freq<2){
                return -1;
            }
            if(freq%3==0){
                count += freq/3;
            }
            else{
                count += (freq/3 + 1);
            }
        }
        return count;
    }
    
};