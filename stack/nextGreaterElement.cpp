### Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array.
### Next greater element of an element in the array is the nearest element on the right which is greater than the current element.
### If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.

vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long >st;
        vector<long long>v;
        for(int i=n-1;i>=0;i--){
            if(st.size()==0){
                v.push_back(-1);
            }
            else if(st.size()>0 && st.top()>arr[i]){
                v.push_back(st.top());
            }
            else if(st.size()>0 && st.top()<arr[i]){
                while(st.size()>0 && st.top()<arr[i]){
                    st.pop();
                }
                if(st.size()==0){
                    v.push_back(-1);
                }
                else{
                    v.push_back(st.top());
                }
                
            }
            
            
            
            
            st.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
