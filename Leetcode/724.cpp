class Solution {
public:
    int pivotIndex(vector<int>& n) {
        int sum=0;
        int leftsum=0;
        for(int i=0;i<n.size();i++){
            sum+=n[i];
        }
        for(int i=0;i<n.size();i++){
            if(leftsum == sum - leftsum - n[i])
                return i;
            else leftsum+=n[i];
                      
        } return -1;
        
    } 
};
