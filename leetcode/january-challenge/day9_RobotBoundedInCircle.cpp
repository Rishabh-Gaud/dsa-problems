class Solution {
public:
    bool isRobotBounded(string ins) {
        vector<vector<int>>dir= {{0,1},{-1,0},{0,-1},{1,0}};
        int j=0;
        int x=0,y=0;
        for(int i=0;i<ins.size();i++){
            if(ins[i]=='L'){
                j=(j+1)%4;
                
            }else if(ins[i]=='R'){
                j= (j+3)%4;
            }else{
                x=x+dir[j][0];
                y=y+dir[j][1];
            }
        }
        return j!=0 || x==0&&y==0;
    }
};



// {0,0} ->{0,1} -> {0,2}->{0,1}->{0,0} 
// "LL"
// {0,0}->{0,1}->{0,2}->{0,3}->{0,4} j=0
