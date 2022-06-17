class Solution {
public:
    int findMiddleIndex(vector<int>& n) {
        int sum=0;
        int lsum=0;
        for(int i=0;i<n.size();i++){
            sum+=n[i];
        }
        for(int i=0;i<n.size();i++){
            if(lsum == sum - lsum - n[i]){
                return i;
            }
            else{
                lsum+=n[i];
            }
        } return -1;
    }
};
