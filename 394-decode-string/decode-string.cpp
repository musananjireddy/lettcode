class Solution {
public:
    string decodeString(string s) {
        string res="";
        stack<int>num;
        stack<string>str;
        string temp="";
        int len;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                len = 0;
                while(isdigit(s[i])){
                    len = len*10+s[i]-'0';
                    i++;
                }
                i--;

            }
           
            else if(s[i]=='['){
                num.push(len);
                str.push(res);
                len=0;
                res="";
            }
            else if(s[i]==']'){
                temp=res;
                res = str.top();
                str.pop();
                int k = num.top();
                num.pop();
                while(k>0){
                    res+=temp;
                    k--;
                }
            }
            else{
                res+=s[i];
            }
        }
        return res;
        
    }
};