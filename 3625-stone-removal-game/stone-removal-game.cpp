class Solution {
public:
    bool canAliceWin(int n) {
       int val = 10;
       bool alice = true;
       while(n>=val){
        n = n-val;
        val--;
        alice= !alice;
       }
       return !alice;
    }
};