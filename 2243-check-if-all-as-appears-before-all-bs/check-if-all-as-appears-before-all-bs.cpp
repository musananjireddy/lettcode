class Solution {
public:
    bool checkString(string s) {
        int a=0;
        int b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                a++;
            }
            else if(s[i]=='b'){
                b++;
                a=0;
            }
            if(b>0 && a!=0 ){
                return false;
            }

           
        }
        return true;

        
    }
};