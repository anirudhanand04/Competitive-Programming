#define ll long long int
class Solution {
    int bs(int low,int high,vector<int>& nums,ll tar){
        while(low<=high){
            int mid= low - (high-low)/2;
            if(nums[mid]>tar)high=mid-1;
            else if(nums[mid]<tar)low=mid+1;
            else{
                return 1;
            }
        }
        return 0;
    }
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int left;
        int right;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int left=j+1;
                int right=n-1;
                while(left<right){
                    ll sum =  (ll)nums[i]+ (ll)nums[j]+(ll)nums[left]+(ll)nums[right];
                    if(sum>target)right--;
                    else if(sum<target)left++;
                    else{
                        vector<int> ds;
                        ds.push_back(nums[i]);
                        ds.push_back(nums[j]);
                        ds.push_back(nums[left]);
                        ds.push_back(nums[right]);
                        ans.insert(ds);
                        left++;right--;
                    }
                }
            }
        }
        vector<vector<int>> finalAns;
        
        for(auto &it : ans ) finalAns.push_back(it);
        return finalAns;
    }
};
