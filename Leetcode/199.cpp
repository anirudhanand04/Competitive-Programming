class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        
        queue<TreeNode*>q;
        
        
        
        q.push(root);
        
        vector<int> v;
        if(!root) return v;
        
        while(!q.empty()){
            int n=q.size();
            
            vector<int>helper;
            for(int i=0;i<n;i++){
                TreeNode* temp=q.front();
                
                q.pop();
                helper.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            v.push_back(helper[n-1]);
            
        }
        return v;
    }
};
