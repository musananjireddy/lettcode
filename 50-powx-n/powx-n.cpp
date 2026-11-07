class Solution {
public:
    double slove(double x,long long power){
        if(power==0){
            return 1;
        }
        double half = slove(x,power/2);
        if(power%2==0){
            return half*half;
        }
        return half*half*x;
    }
    double myPow(double x, int n) {
        long long power = n;
        if(power<0){
            return 1.0/slove(x,-power);
        }
        return slove(x,power);
        
    }
};