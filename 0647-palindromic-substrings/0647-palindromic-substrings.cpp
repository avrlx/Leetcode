class Solution {
public:
    int countpalindrom(string s, int i, int j) {
        int count = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            i--;
            j++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;
        for (int index = 0; index < s.length(); index++) {
            int i = index;
            int j = index;

            int countodd = countpalindrom(s, i, j);

            i = index;
            j = index + 1;
            int counteven = countpalindrom(s, i, j);

            count += counteven + countodd;
        }
        return count;
    }
};