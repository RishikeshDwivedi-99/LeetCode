class Solution {
public:
    int thirdMax(vector<int>& a) {
        int n = a.size();
        long long first = LLONG_MIN, second = LLONG_MIN, third = LLONG_MIN;

        for(int i=0;i<n;i++) {
            if (a[i] == first || a[i] == second || a[i] == third) {
                continue;
            }
            if(a[i] > first) {
                third = second;
                second = first;
                first = a[i];
            }
            else if(a[i] > second && a[i] != first) {
                third = second;
                second = a[i];
            }
            else if(a[i] > third && a[i] !=second){
                third = a[i];
            }
        }
        return (third == LLONG_MIN) ? first : third;
        
    }
};