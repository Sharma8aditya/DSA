class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        vector<int> temp;
        temp.push_back(1);
        if (numRows >= 1) arr.push_back(temp);
        if (numRows >= 2) {
            temp.push_back(1);
            arr.push_back(temp);
        }
        if (numRows > 2)
        {
            for (int j=2; j<numRows; j++){
                vector<int> next_temp;
                next_temp.push_back(1);
                for (int i=1; i<temp.size(); i++)
                {
                    next_temp.push_back(temp[i-1]+temp[i]);
                }
                next_temp.push_back(1);
                temp=next_temp;
                arr.push_back(temp);
            }
        }
        return arr;
    }
};