code for power of x to the power n.

code:

class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        while (n) {
            if (n % 2) res = n > 0 ? res * x : res / x;
            x = x * x;
            n /= 2;
            n*=2;
        }
        return res;
    }
};

// didnt needed that
  
