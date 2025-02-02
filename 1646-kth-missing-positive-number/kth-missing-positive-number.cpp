class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int st = 0;
        int end = n-1;
        int mid = 0;
        int ans = n;
        while(st <= end) {
            mid = st + (end - st) / 2;
            if(arr[mid]-mid-1 >= k) {
                ans = mid;
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        return ans+k;
    }
};