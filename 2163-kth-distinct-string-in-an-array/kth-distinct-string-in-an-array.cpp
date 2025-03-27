class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        vector<string> ans;
        
        for (int i = 0; i < n; i++) {
            int count = 0;
            
            for (int j = 0; j < n; j++) {
               
                if (i != j && arr[i] == arr[j]) {
                    count++;  
                    break;    
                }
            }

            if (count == 0) {
                ans.push_back(arr[i]);
            }
        }

        if (ans.size() < k) {
            return "";
        }

        return ans[k - 1];
    }
};
