class Solution {
public:
    string decodeString(string s) {
      stack<int>num;
      stack<string>str;
      int len=0;
      string res="";
      for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            len=0;
            while(isdigit(s[i])){
                len= len*10+(s[i]-'0');
                i++;
            }
            i--;
        }
        else if(s[i]=='['){
            num.push(len);
            str.push(res);
            res="";
            len=0;
        }
        else if(s[i]==']'){
            string temp=res;
            res=str.top();
            str.pop();
            int k=num.top();
            num.pop();
            while(k--){
                res+=temp;
            }

        }
        else{
            res+=s[i];
        }
      }
      return res;
    }
};