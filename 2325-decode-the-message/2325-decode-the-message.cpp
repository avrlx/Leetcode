#include <unordered_map>;
class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> mp ;

        char x = 'a';
        mp [' '] = ' ';
        for( auto i : key ){
            if(mp.find(i) == mp.end()){
                mp[i] = x;
                x++;
            }
        }
        string ans = "";
        for( auto i : message ){
            ans.push_back(mp[i]);
        }
        return ans;
    }
};