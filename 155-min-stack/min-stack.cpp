class MinStack {
public:
stack<int>st;
stack<int>minstack;
    MinStack() {

        
    }
    
    void push(int value) {
        st.push(value);
        if(minstack.empty()||value<=minstack.top()){
            minstack.push(value);
        }
        else{
            minstack.push(minstack.top());
        }

        
    }
    
    void pop() {
        if(st.empty()){
            return ;
        }
        st.pop();
        minstack.pop();
        
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }
        return st.top();
    }
    
    int getMin() {
        if(minstack.empty()){
            return -1;
        }
        return minstack.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */