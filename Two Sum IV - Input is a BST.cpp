class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int> answer;
        orderTheList(root, answer);
        int i=0, j= answer.size()-1;
        while(i<j){
            if(answer[i]+answer[j]==k)
                return true;
            if(answer[i]+answer[j]>k)
                j--;
            else
                i++;
        }
        return false;
    }
    void orderTheList(TreeNode*root, vector<int> &answer){
        if(root == NULL)
            return;
        orderTheList(root->left, answer);
        answer.push_back(root->val);
        orderTheList(root->right, answer);
    }
};
