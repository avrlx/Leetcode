class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[1000];
        for(auto i : s){
            arr[i]++;
        }
        for(auto i : t ){
            arr[i]--;
        }
        for(auto i : arr){
            if ( i != 0)
                return false;
    
        }
        return true;
    }

};