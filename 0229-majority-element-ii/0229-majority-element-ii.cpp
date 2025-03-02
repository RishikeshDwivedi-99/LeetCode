class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        unordered_map<int,int> hashmap;
        

        for(int num : nums) {
            hashmap[num]++;
        }
        int n1 = n/3;

        for(auto &a : hashmap) {
            if(a.second > n1) {
                v.push_back(a.first);
            }
        }
        return v;
    }
};