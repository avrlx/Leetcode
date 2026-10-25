class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans= "";
        for(string i : words){
            int sum = 0 ; 
            for(char j : i){
                sum += weights[j - 'a'];
            }
            sum = sum % 26;
            char ch = 'z' - sum;
            ans.push_back(ch);
        }
        return ans;
    }
};