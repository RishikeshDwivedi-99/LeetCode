class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1;
        int p2 = n-1;
        int l = n+m-1;

        while(p1 >= 0 && p2 >= 0) {
            if(nums1[p1] <= nums2[p2]) {
                nums1[l] = nums2[p2];
                l--;
                p2--;
            }
            else if(nums1[p1] > nums2[p2]) {
                nums1[l] = nums1[p1];
                l--;
                p1--;
            }
        }
        while(p2 >= 0) {
            nums1[l] = nums2[p2];
            l--;
            p2--;
        }
    }
};