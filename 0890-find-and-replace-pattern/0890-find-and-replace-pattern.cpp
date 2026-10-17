class Solution {
public:
    string normalize(string s){
        unordered_map<char,char> mp;
        // created map
        char start = 'a';
        for(auto i : s){ // check if char is not present in map the insert it .
            if(mp.find(i) == mp.end()){
                mp[i] = start;
                start++;
            }
        }
        // use map 
        string ans = "";
        for(auto i : s ){
            char ch = mp[i];
            ans.push_back(ch);
        }
        return ans;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        pattern = normalize(pattern);
        for(auto i : words){
            string newword = normalize(i);
            if( newword == pattern){
                ans.push_back(i);
            }
        }
        return ans;

    }
};