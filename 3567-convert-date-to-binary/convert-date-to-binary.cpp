class Solution {
public:
    string convertDateToBinary(string date) {
        int n = date.size();
        string year = date.substr(0,4);
        string month = date.substr(5,2);
        string day = date.substr(8,2);


        int yearint = stoi(year);
        int monthint = stoi(month);
        int dayint = stoi(day);

        string binaryyear = bitset<12>(yearint).to_string();
        string binarymonth = bitset<4>(monthint).to_string();
        string binaryday = bitset<5>(dayint).to_string();

        binaryyear = binaryyear.substr(binaryyear.find('1'));
        binarymonth = binarymonth.substr(binarymonth.find('1'));
        binaryday = binaryday.substr(binaryday.find('1'));

        return binaryyear+"-"+binarymonth+"-"+binaryday;
    }
};