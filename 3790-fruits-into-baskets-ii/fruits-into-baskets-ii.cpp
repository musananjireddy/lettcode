class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        for(int i=0;i<baskets.size();i++){
            for(int j=0;j<fruits.size();j++){
                if(baskets[i]>=fruits[j]){
                    baskets.erase(baskets.begin()+i);
                    fruits.erase(fruits.begin()+j);
                    i--;
                    break;
                }
            }
        }
        return fruits.size();
    }
};