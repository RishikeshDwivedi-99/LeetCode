class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size();
        int m = travel.size();
        int ans = 0;
        int travelTime = 0;
        int garbageTime = 0;
        for(int i=1;i<m;i++) {
            travel[i] = travel[i] + travel[i - 1];
        }
        int lastp = -1, lastm = -1, lastg = -1;
        for(int i=0;i<n;i++) {
            garbageTime += garbage[i].length();
            if(garbage[i].find('P') != string::npos) lastp = i;
            if(garbage[i].find('M') != string::npos) lastm = i;
            if(garbage[i].find('G') != string::npos) lastg = i;
        }

        if(lastp > 0) travelTime += travel[lastp-1];
        if(lastm > 0) travelTime += travel[lastm-1];
        if(lastg > 0) travelTime += travel[lastg-1];
        ans = garbageTime + travelTime;
        return ans;
    }
};