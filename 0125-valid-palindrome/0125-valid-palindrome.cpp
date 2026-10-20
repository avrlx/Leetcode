class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for ( char i : s){
            if( i >= 'A' && i <= 'Z'){
                ans.push_back((i - 'A' + 'a'));
            }
            if( i >= 'a' && i <= 'z'){
                ans.push_back(i );
            }
            if( i >= '0' && i <= '9'){
                ans.push_back(i );
            }

        }
        if ( ans == "") return true;
        int i = 0;
        int j = ans.size() - 1;
        while ( i<=j){
            if ( ans[i] != ans[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};