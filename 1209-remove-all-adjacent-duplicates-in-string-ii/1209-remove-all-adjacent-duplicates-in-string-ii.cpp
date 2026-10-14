class Solution {
public:
    string removeDuplicates(string s, int k) {
         vector <pair<char,int>> ans;
        for( auto ele : s){
            if (ans.empty() ){
                ans.push_back({ele,1});
                 }
            else if( ele != ans.back().first){
                ans.push_back({ele,1});
            }
            else {
                ans.back().second ++;
            }
            if(ans.back().second == k) {
                ans.pop_back();
            }
        }
        string result = "";
        for(auto i : ans){
            result.append(i.second,i.first);
        }
        return result;
    }
};