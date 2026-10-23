class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0 ;
        for (int i = 1 ; i < s.size(); i++ ){
            int n = s[i-1] - s[i];
            ans += abs(n);
        }
        return ans;
    }
};