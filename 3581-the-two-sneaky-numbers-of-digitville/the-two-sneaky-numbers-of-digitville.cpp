class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& a) {
        vector<int> nums;
        int n = a.size();
        int count = 0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(a[i] == a[j] ) {
                    nums.push_back(a[i]);
                }
            }
        }
        return nums;
    }
};