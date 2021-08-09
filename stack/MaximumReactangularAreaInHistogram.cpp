// Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have the same width and the width is 1 unit.
 
// Example 1:

// Input:
// N = 7
// arr[] = {6,2,5,4,5,1,6}
// Output: 12

  
  long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        
        stack<pair<long long , long long>>st;
        
        stack<pair<long long , long long>>st1;
        vector<long long>vl;
        vector<long long>vr;
        
        // for nearest smallest on left
        
        for(int i=0;i<n;i++){
            if(st.size()==0){
                vl.push_back(-1);
            }
            else if(st.size()>0 && st.top().first<arr[i]){
                vl.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first>=arr[i]){
                while(st.size()>0 && st.top().first>=arr[i]){
                        st.pop();                
            }
            if(st.size()==0){
                vl.push_back(-1);
            }
            else{
                vl.push_back(st.top().second);
            }
            
        }

            st.push({arr[i],i});
        }
        
        // for nearest smaller on right
        
        for(int i=n-1;i>=0;i--){
            if(st1.size()==0){
                vr.push_back(n);
            }
            else if(st1.size()>0 && st1.top().first<arr[i]){
                vr.push_back(st1.top().second);
            }
            else if(st1.size()>0 && st1.top().first>=arr[i]){
                while(st1.size()>0 && st1.top().first>=arr[i]){
                        st1.pop();                
            }
            if(st1.size()==0){
                vr.push_back(n);
            }
            else{
                vr.push_back(st1.top().second);
            }
            
        }

            st1.push({arr[i],i});
        }
        reverse(vr.begin(),vr.end());
        for(int i=0;i<n;i++){
            vl[i]=vr[i]-vl[i]-1;
        }
        long long  maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(arr[i]*vl[i] , maxi);
        }
        return maxi;
        
        
    }
