class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map < int,int> map ;
        for( int i : friends){
            map[i]++;
        }
        vector <int> ans;
        for( int i: order){
            if(map.find(i) != map.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};