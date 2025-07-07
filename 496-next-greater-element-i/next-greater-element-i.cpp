class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> nextGreaterMap;
        stack<int> st;
        for(int i=n-1;i>=0;i--) {
            while(st.size()>0 && st.top() <= nums2[i]) {
                st.pop();
            }
            if(st.size() == 0) {
                nextGreaterMap[nums2[i]] = -1;
            }
            else{
                nextGreaterMap[nums2[i]] = st.top();
            }

            st.push(nums2[i]);
        }
        vector<int> result;

        for(int num : nums1) {
            result.push_back(nextGreaterMap[num]);
        }
        return result;
    }
};