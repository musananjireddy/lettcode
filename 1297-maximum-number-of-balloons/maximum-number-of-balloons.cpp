class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();
        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[text[i]-'a']++;
        }
        int count=0;
        for(int i=0;i<1572;i++){
            if(freq['b'-'a']>0 && freq['a'-'a']>0 && freq['l'-'a']>1 && freq['o'-'a']>1 &&freq['n'-'a']>0){
                count++;
                freq['b'-'a']--;
                freq['a'-'a']--;
                freq['l'-'a']-=2;
                freq['o'-'a']-=2;
                freq['n'-'a']--;
        }
        else{
            break;
        }
        }
        return count;

        
    }
};