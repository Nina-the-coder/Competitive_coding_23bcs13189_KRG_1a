class Solution {
public:
    int extendedGCD(int a, int b, int &x, int &y) {
        if (b == 0) {
            x = 1;
            y = 0;
            return a;
        }

        int x1, y1;
        int gcd = extendedGCD(b, a % b, x1, y1);

        x = y1;
        y = x1 - (a / b) * y1;

        return gcd;
    }

    vector<int> gcd(int a, int b) {
        int x, y;
        int g = extendedGCD(a, b, x, y);
        return {g, x, y};
    }
};