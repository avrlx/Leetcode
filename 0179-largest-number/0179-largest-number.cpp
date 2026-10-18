class Solution {
public:

    static bool comp(string & a , string & b){
        string t1 = a+b;
        string t2 = b+a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector< string> str;
        for(auto i : nums){
            str.push_back(to_string(i));
        }

        sort(str.begin(),str.end(),comp);
        if( str[0] == "0" ) return "0";
        string ans = "";
        for(auto i : str){
            ans += i;
        }
        return ans;
    }
};