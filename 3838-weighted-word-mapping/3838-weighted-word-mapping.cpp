class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        unordered_map <char,int> map ;
        for(int i = 0 ; i< weights.size(); i++){
            map['a' + i ] = weights[i];
        }
        string ans= "";
        for(string i : words){
            int sum = 0 ; 
            for(char j : i){
                sum += map[j];
            }
            sum = sum % 26;
            char ch = 'z' - sum;
            ans.push_back(ch);
        }
        return ans;
    }
};