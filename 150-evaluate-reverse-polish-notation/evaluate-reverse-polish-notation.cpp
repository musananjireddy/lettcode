class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        stack<int>st;
        long long res=0;
        for(int i=0;i<n;i++){
            if(isdigit(tokens[i][0])||tokens[i].size()>1){
                st.push(stoi(tokens[i]));
            }
            else{
                int a,b;
                a=st.top();
                st.pop();
                b=st.top();
                st.pop();
                if(tokens[i][0]=='+'){
                    st.push(a+b);
                }
                else if(tokens[i][0]=='-'){
                    st.push(b-a);
                }
                else if(tokens[i][0]=='*'){
                    st.push(a*b);

                }
                else if(tokens[i][0]=='/'){
                    st.push(b/a);
                    }
                }

            }

    
        return st.top();
        
    }
};