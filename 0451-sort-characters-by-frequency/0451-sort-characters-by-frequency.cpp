class Solution {
public:
    string frequencySort(string s) {
        
        //count the frequencies
        unordered_map <int, int> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        //priority queue will maintain decreasing order
        priority_queue<pair<int, char>> pq;
        for(auto i:mp){
            pq.push({i.second, i.first});            //second for frequency and first for the characters
        }
        
        
        //generate the required answer
        string res = "";
        while(!pq.empty()){
            pair<int, char> p = pq.top();
            pq.pop();
            
            while(p.first--){
                res += p.second;
            }
        }
        return res;
    }
};