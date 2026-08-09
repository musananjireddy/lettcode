class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        int j=0;
        int i=0;
        double sum=0;
        while(i<prices.size() && j<discounts.size()){
            sum+=(double)(prices[i]*(100-discounts[j]))/100;
            i++;
            j++;
            
        }
        while(i<prices.size()){
            sum+=prices[i];
            i++;
        }
        return (double)sum;
        
        
    }
};