class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>>A;
        for(int i = 0; i<names.size();i++){
            A.push_back({heights[i], names[i]});
        }
        
        //sort the vector
        sort(A.rbegin(), A.rend());
        
        //print the names vector
        for(int i = 0;i<names.size();i++){
            names[i] = A[i].second;
        }
        return names;
    }
    
};