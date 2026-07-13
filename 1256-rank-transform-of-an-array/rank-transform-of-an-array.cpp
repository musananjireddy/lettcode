class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp = arr;
        sort(temp.begin(),temp.end());
        vector<int>res;
        set<int>uniq;
        for(int a:temp){
            if(uniq.find(a)==uniq.end()){
                uniq.insert(a);
                res.push_back(a);
	    }
        }
        map<int,int>mp;
        for(int i=0;i<res.size();i++){
            mp[res[i]]=i;
    
        }
        vector<int>ans;
        for(int x:arr){
            ans.push_back(mp[x]+1);
        }
        return ans;
        
    }
};