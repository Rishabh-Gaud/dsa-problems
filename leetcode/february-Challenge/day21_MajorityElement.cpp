class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int majEle = nums[0];
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==majEle){
                cnt++;
            }else{
                cnt--;
                if(cnt==0){
                    majEle = nums[i];
                    cnt=1;
                }
            }
        }
        return majEle;
        
    }
      
};

 // O( N ) time O( S ) space
//           unordered_map<int,int>mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         int res=-1;
//         for(auto c:mp){
//             if(c.second>(nums.size()/2))return c.first;
//         }
//         return res;
//     }
      

// O( Nlog(N) ) time 

//      sort(nums.begin(),nums.end());
//         int cnt=1;
//         int ans=0;
//         int res;
//         if(nums.size()<2)return nums[0];
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1]==nums[i]){
//                 cnt++;
//                 ans=max(ans,cnt);
//                 if(ans<=cnt){
//                     res = nums[i];
//                }
              
//             }else{
//                 ans=max(ans,cnt);
//                 cnt=1;
//             }
//         }
//         cout<<ans;
//         if(ans>nums.size()/2)
//         return res;
//         return -1;      
//       
