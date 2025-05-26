class Solution {
public:
    int countPoints(string rings) {
        int n = rings.length();
        int count = 0;

        for (int i = 0; i < 10; i++) {
            string temp = "";
            for (int j = 1; j < n; j += 2) {
                if (rings[j] - '0' == i) {
                    temp += rings[j - 1];
                }
            }

            // Check if temp contains all 'R', 'G', and 'B'
            if (temp.find('R') != string::npos &&
                temp.find('G') != string::npos &&
                temp.find('B') != string::npos) {
                count++;
            }
        }

        return count;
    }
};
