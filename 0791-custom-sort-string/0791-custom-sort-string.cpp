// string ordercopy;
class Solution {
public:
    // static bool comp(char &a ,char &b){
    //     return ordercopy.find(a) < ordercopy.find(b);
    // }
    // string customSortString(string order, string s) {
    //     ordercopy = order;
    //     sort(s.begin(),s.end(),comp);
    //     return s;
    // }
    string customSortString(string order, string s){
        unordered_map <char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        string ans = "";
        for(auto i : order){
            while(mp[i] > 0 ){
                ans.push_back(i);
                mp[i]--;
            }
        }
        for( auto [ch,i] : mp){
            while (i > 0 ){
                ans.push_back(ch);
                i--;
            }
        }
        return ans;
    }
};