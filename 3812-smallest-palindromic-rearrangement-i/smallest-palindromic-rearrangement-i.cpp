class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        string left = "";
        for(int i=0;i<26;i++){
            int times = freq[i]/2;
            while(times>0){
                left +=char(i+'a');
                times--;
            }
        }
        string middle="";
        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                middle+=char(i+'a');
            }
        }
        string right ="";
        string str=left;
        reverse(str.begin(),str.end());
        for(int i=0;i<left.size();i++){
            right+=str[i];
        }
        return left+middle+right;
        
    }
};