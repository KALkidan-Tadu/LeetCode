class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>answer;
        helpme(root, answer);
        return answer;
    }
    void helpme(TreeNode* root, vector<int> &answer){
        if(root == NULL)
            return;
        helpme(root->left, answer);
        answer.push_back(root->val);
        helpme(root->right, answer);
    }
};
