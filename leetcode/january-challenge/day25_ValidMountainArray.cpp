class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int peek=0;
        if(arr.size()< 3)return 0; 
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])peek++;
            if(arr[i]==arr[i-1]||
               (arr[i]<arr[i-1]&&arr[i]<arr[i+1]))return 0;
        }
        if(peek==1)return 1;
        return 0;
    }
};
