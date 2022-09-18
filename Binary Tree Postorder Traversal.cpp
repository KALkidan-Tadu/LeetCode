class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answer;
        helpme(root, answer);
        return answer;
    }
    void helpme(TreeNode* root, vector<int> &answer){
        if(root == NULL)
            return;
        helpme(root->left, answer);
        helpme(root->right, answer);
        answer.push_back(root->val);
    }
};
   
