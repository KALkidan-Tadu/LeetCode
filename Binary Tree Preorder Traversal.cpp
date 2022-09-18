class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        helpme(root, answer);
        return answer;
    }
    void helpme(TreeNode* root, vector<int> &answer){
        if(root == NULL)
            return;
        answer.push_back(root->val);
        helpme(root->left, answer);
        helpme(root->right, answer);
    }
};
