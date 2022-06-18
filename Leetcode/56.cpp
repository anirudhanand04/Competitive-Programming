class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        int n=in.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(ans.empty()){
                ans.push_back(in[i]);
            }
            else{
                vector<int>&v = ans.back();
                int y = v[1]; // end time of previous intervals
                if(in[i][0]<= y){
                    v[1] = max(y,in[i][1]);
                }
                else{
                    ans.push_back(in[i]);
                }
            }
        }
        return ans;
    }
};
