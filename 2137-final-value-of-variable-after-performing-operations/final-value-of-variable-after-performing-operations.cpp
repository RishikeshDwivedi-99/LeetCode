class Solution {
public:
    int finalValueAfterOperations(vector<string>& a) {
        int n = a.size();
        int x = 0;
        for(int i=0;i<n;i++) {
            if(a[i]=="--X") {
                --x;
            }else if(a[i]=="X++") {
                x++;
            }
            else if(a[i]=="X--") {
                x--;
            }
            else{
                ++x;
            }
        }

        return x;
    }
};