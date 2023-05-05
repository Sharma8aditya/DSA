class Solution {
public:
    int maxVowels(string s, int k) {
        int maxi = 0;
        int count = 0;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < s.length(); i++) {
            if (i >= k && vowels.count(s[i-k])) {
                count--;
            }
            if (vowels.count(s[i])) {
                count++;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};