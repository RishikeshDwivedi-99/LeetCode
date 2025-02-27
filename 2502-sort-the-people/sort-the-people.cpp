class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        int n = heights.size();
        for(int i=0;i<n;i++) {
            people.push_back({heights[i],names[i]});
        }
        sort(people.rbegin(), people.rend());
        vector<string> ans;
        for(int i=0;i<n;i++) {
            ans.push_back(people[i].second);
        }
        return ans;

    }
};