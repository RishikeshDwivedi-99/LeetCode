class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = 0;
        double fah = 0;

        kelvin = celsius + 273.15;
        fah = celsius * 1.80 + 32.00;

        return {kelvin, fah};
    }
};