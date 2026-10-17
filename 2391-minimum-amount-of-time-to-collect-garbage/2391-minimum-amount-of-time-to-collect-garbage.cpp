class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // truck G
        int pickG =0;
        int lasthouseG = 0;
        // truck P
        int pickP =0;
        int lasthouseP = 0;
        // truck M
        int pickM =0;
        int lasthouseM = 0;

        for(int i = 0;i < garbage.size();i++){
            string newhouse = garbage[i];
            for(int j =0 ; j<newhouse.size();j++){
                char g = newhouse[j];
                if(g == 'P'){
                    pickP++;
                    lasthouseP = i;
                }
                else if( g == 'G'){
                    pickG ++;
                    lasthouseG = i;

                }
                else if( g == 'M'){
                    pickM ++;
                    lasthouseM = i;
                }
            }
        }
        int travelP =0;
        int travelG = 0;
        int travelM = 0;
        for(int i = 0; i< lasthouseG;i++){
            travelG += travel[i];
        }
        for(int i = 0; i< lasthouseM;i++){
            travelM += travel[i];
        }
        for(int i = 0; i< lasthouseP;i++){
            travelP += travel[i];
        }

        int totaltime = travelM + travelG + travelP + pickG + pickP + pickM;
        return totaltime; 
    }
};