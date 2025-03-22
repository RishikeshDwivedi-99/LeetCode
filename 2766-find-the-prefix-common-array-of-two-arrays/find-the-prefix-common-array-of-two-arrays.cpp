class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_set<int> seenA, seenB;
        vector<int> ans;
        for(int i=0;i<n;i++){
            seenA.insert(A[i]);
            seenB.insert(B[i]);

            int commonCount = 0;
            for(int num : seenA) {
                if(seenB.find(num) != seenB.end()) {
                    commonCount++;
                }
            }
            ans.push_back(commonCount);

        }
        return ans;
    }
};