#include<bits/stdc++.h>
using namespace std;
class TreeNode {
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this -> val = val;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(TreeNode* root , vector<int>& ans) {
    //Base Case
    if(root == nullptr) {
        return;
    }
    inorder(root -> left , ans);
    ans.push_back(root -> val);
    inorder(root -> right , ans);
    //return;
}

vector<int> inorder_traversal(TreeNode* root) {
    
    
    vector<int>ans;
    inorder(root , ans);
    return ans;
}

int main(){
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);

    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(7);
    
    vector<int> ans = inorder_traversal(root);
    
    for(int x : ans) {
        cout << x << " ";
    }
    return 0;
}