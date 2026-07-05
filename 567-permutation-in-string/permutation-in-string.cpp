class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        vector<int>ans(26,0),res(26,0);
        if(m<n){
            return false;
        }
            for(int i=0;i<n;i++){
                ans[s1[i]-'a']++;
                res[s2[i]-'a']++;
        }
            if(ans == res){
                return true;
        }
            for(int i=n;i<m;i++){
                res[s2[i]-'a']++;
                res[s2[i-n]-'a']--;
                
                if(res==ans){
                    return true;
            }
        }
    
        return false;
        
    }
};