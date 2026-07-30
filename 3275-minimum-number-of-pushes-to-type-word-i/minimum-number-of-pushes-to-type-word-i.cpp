class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int i=0;
        int count=0;
        for(int i=0;i<n;i++){    
            if(i<n && i<8){
                count++;
                
        }
            else if(i<n && i<16){
                count+=2;
        }
            else if(i<n && i<24){
                count+=3;
        
        }
            else if(i<n && i<26){
                count+=4;
            
        }
    }
        return count;
        
    }
};