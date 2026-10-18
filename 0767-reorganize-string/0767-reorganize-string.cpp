class Solution {
public:
    string reorganizeString(string s) {
        int map[256] = {0};
        for (int i = 0 ;i<s.size();i++){
            map[s[i]]++;
        }
        int max_freq = INT_MIN;
        char max_freq_char;
        for(int i = 'a' ;i <= 'z';i++){
            if(map[i]>max_freq) {
                max_freq = map[i];
                max_freq_char = i;
            }
        }
        if(max_freq > (s.size() + 1)/2) return "";
        int index = 0;
        while(index < s.size() && max_freq >0){
            s[index] = max_freq_char;
            max_freq -- ;
            index +=2;
        }
        map[max_freq_char] = 0;

        for(int i  = 'a' ; i<= 'z' ;i++){
            while(map[i] > 0){
                index = index >= s.size() ? 1 : index;
                s[index] = i;
                map[i]--;
                index +=2; 
            }
        }
        return s;
    }
};