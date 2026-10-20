class Solution {
public:
    string convert(string s, int numRow) {
        if (numRow == 1) return s;
        vector<string> zigzag(numRow);
        int i = 0;int row = 0;
        bool direction = 1;// T -> B
        while(i < s.size()){
            if(direction){
                while(i<s.size() && row < numRow){
                    zigzag[row++].push_back(s[i++]);
                }
                row -= 2;
            }
            else{
                while(i < s.size() && row >=0){
                    zigzag[row--].push_back(s[i++]);
                }
                row = 1;
            }
            if(i >= s.size()) break;
            direction = !direction;
        }
        string ans = "";
        for(auto i : zigzag){
            ans += i;
        }
        return ans;
    }
};