class Solution {
public:
    string digitSum(string s, int k) {
        int n = s.size();
        while(s.size()>k){
            string st="";
            string a="";
            int sum=0;
            for(int i=0;i<s.size();i++){
                st+=s[i];
                int x = s[i]-'0';
                sum+=x;
                if(st.size()==k){
                    a+=to_string(sum);
                    st="";
                    sum=0;
            }
        }
          if(st.size() > 0) {
                a += to_string(sum);
            }
            
            s = a;
        
           

        }
        return s;

        

        
    }
};