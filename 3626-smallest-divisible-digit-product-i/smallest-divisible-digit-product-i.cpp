class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int j=i;
            int rev=1;
            while(j>0){
                int digit = j%10;
                rev = rev*digit;
                j=j/10;

            }
            if(rev%t==0){
                return i;
            }
           
        }
        return -1;
        
    }
};