class Solution {
public:

    // bool checkanagram(string  s , string  p ){
    //     sort(s.begin(),s.end());
    //     for(int i = 0 ;i < s.size(); i++){
    //         if ( s[i] != p[i]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    // vector<int> findAnagrams(string s, string p) {
    //     sort(p.begin(),p.end());
    //     vector<int> ans(0);

    //     int i =0;
    //     int j = p.size();
    //     while(i + j <= s.size()){
    //         string substring = s.substr(i,p.size());
    //         if(checkanagram(substring,p)){
    //             ans.push_back(i);
    //         }
    //         i++;
    //     }
    //     return ans;

    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size() < p.size()) return ans;
        // array to store freq of p and s
        vector<int> window(26,0);
        vector<int> comp(26,0);
        // count freq
        for(int i = 0; i < p.size(); i++ ){
            window[s[i] - 'a']++;
            comp[p[i] - 'a']++;
        }
        // check if first window is anagram 
        if( window == comp) ans.push_back(0);

        // sliding window
        for(int i = p.size(); i <s.size(); i++){
            // add next element
            window[s[i] - 'a']++;
            // remove last element
            window[s[i - p.size()] - 'a'] -- ;
            // check if map is same after window shift.
            if(window == comp){
                ans.push_back(i - p.size() + 1);
            }
        }
        return ans;

    }
};