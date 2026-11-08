class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n = s1.size();
        vector<vector<string>>st;
       
        int i=0;
        int j=0;
        while(i<=j && j<n){
            if(s1[j]!=s2[j]){
                j++;
            }
            else{
                if(i!=j){
                    
                    vector<string>s;
                    string res1 = s1.substr(i,j-i);
                    string res2 = s2.substr(i,j-i);
                    s.push_back(res1);
                    s.push_back(res2);
                    st.push_back(s);
                    i=j;
                    
                }
                else{
                    i++;
                    j++;
                }
                
                
            }
            
        }
        if(i<n){
            vector<string>s;
            string r1 = s1.substr(i,j-i);
            string r2 = s2.substr(i,j-i);
            s.push_back(r1);
            s.push_back(r2);
            st.push_back(s);
            
            
        }
        return st;
    }
};