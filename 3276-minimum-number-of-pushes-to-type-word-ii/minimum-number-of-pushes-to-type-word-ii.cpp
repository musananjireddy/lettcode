class Solution {
public:
    int minimumPushes(string word) {
    int  n =word.size();
	unordered_map<char,int>mp;
	for(char c:word){
	    mp[c]++;
	}
	vector<pair<int,char>>ans;
	for(auto &x:mp){
	    ans.push_back({x.second,x.first});
	    
	}
	sort(ans.rbegin(),ans.rend());
    int res=0;
    for(int i=0;i<ans.size();i++){
        res+=(i/8+1)*ans[i].first;

    }
    return res;
        
    }
};