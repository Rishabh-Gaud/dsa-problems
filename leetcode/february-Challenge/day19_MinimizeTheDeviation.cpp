class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int mx=INT_MIN,mn=INT_MAX;
        for(auto &num:nums){
            if(num%2!=0){
                num*=2;
            }
            mx=max(mx,num);
            mn=min(mn,num);
        }
        int minD=mx-mn;
        priority_queue<int>pq;
        for(auto it:nums){
            pq.push(it);
        }
        while(pq.top()%2==0){
            int top = pq.top();
            pq.pop();
            minD = min(minD,top-mn);
            top/=2;
            mn = min(mn,top);
            pq.push(top);
        }
        minD = min(minD,pq.top()-mn);
        return minD;
    }
};
