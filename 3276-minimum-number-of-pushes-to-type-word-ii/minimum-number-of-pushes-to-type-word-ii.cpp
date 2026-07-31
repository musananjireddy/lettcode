class Solution {
public:
    int minimumPushes(string word) {
    int  n =word.size();
	vector<int>mp(26,0);
	for(char c:word){
	    mp[c-'a']++;
	}
	sort(mp.rbegin(),mp.rend());
    int res=0;
    for(int i=0;i<26;i++){
        res+=(i/8+1)*mp[i];

    }
    return res;
        
    }
};