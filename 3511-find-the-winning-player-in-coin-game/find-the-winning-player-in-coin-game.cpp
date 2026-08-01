class Solution {
public:
    string winningPlayer(int x, int y) {
        int alice=0;
        int bob=0;
        while(x>=1 && y>=4){
            if(x>=1 && y>=4){
                alice++;
                x--;
                y-=4;

            }
            if(x>=1 && y>=4){
                bob++;
                x--;
                y-=4;
            }
            
        }
        if(bob>=alice){
            return "Bob";
        }
        return "Alice";
        
    }
};