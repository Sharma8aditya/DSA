class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        //sort both the vectors
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        int i = g.size() - 1;              //greediest child
        int j = s.size() - 1;              //largest cookie
        
        while(i>= 0 && j>=0){
            if(s[j] >= g[i]){              //condition that we can give cookie to the child 
                count++;
                i--;
                j--;
            }
            else{
                i--;
            }
        }
        return count;
    }
};