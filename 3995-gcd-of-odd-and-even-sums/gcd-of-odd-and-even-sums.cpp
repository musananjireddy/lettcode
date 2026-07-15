class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd= n*n;
        int even =n*(n+1);
        int a = odd;
        int b = even;
        while(a!=0){
            int r = b%a;
            b=a;
            a=r;
        }
        return b;
        
    }
};