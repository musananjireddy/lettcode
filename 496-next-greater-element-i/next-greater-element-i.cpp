class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            int x=-1;
            int a = nums1[i];
            for(int j=0;j<m;j++){
                if(a==nums2[j]){
                    for(int k=j;k<m;k++){
                        if(a<nums2[k]){
                            x =nums2[k];
                            break;
                        }
                       
                    }
                    res.push_back(x);
                    
                }
            }
        }
        return res;
        
    }
};