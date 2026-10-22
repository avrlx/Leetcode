class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        int index = 1; // 1-indexed position in the string
        for (char i : s) {
            int reversed_alphabet_pos = 26 - (i - 'a');
            ans += reversed_alphabet_pos * index;
            index++;
        }
        return ans;
    }
};