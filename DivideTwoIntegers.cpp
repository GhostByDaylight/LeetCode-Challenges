#include <cmath>

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        else if(dividend == INT_MIN && divisor == 1){
            return INT_MIN;
        }
        
        bool isNegative = (dividend < 0) ^ (divisor < 0) ? true : false;
        int quotient = 0;
        divisor = abs(divisor);
        dividend = abs(dividend);
        
        while (dividend >= divisor) {
            dividend -= divisor;
            quotient++;
        }
        


        return isNegative ? -quotient : quotient;
    }
};
