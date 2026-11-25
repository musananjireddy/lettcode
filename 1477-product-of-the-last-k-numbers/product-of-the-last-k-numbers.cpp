class ProductOfNumbers {
public:
    vector<int>arr;
    long long pro=1;
    ProductOfNumbers() {

        
    }
    
    void add(int num) {
       if(num==0){
        arr.clear();
        return;
       }
       long long pro=num;
       if(!arr.empty()){
        pro=1LL*arr.back()*num;
       }
       arr.push_back(pro);
    }
    
    int getProduct(int k) {
        int n  = arr.size();
        if(k>n){
            return 0;
        }
        if(k==n){
            return arr[n-1];
        }
        return arr[n-1]/arr[n-k-1];
        
    }
};
/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */