class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();

        vector<string> sample;


        for(int num : nums) {
            sample.push_back(to_string(num));
        }

        sort(sample.begin(), sample.end(), [](string a, string b) {
            return a + b > b + a;
        });

        string ans = "";
        if(sample[0] == "0") return "0";
        for(string a  : sample) {
            ans+=a;
        }
        return ans;
    }
};