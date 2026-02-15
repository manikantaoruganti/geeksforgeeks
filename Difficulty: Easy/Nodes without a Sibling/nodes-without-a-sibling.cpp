vector<int> noSibling(Node* node) {
    vector<int> res;
    if (!node) return {-1}; // empty tree

    // Recursive helper function
    function<void(Node*)> dfs = [&](Node* root) {
        if (!root) return;
        // Only left child exists → no sibling 
        if (root->left && !root->right) 
            res.push_back(root->left->data); 

        
        if (root->right && !root->left) 
            res.push_back(root->right->data);
        dfs(root->left);
        dfs(root->right);
    };
    dfs(node);
    if (res.empty()) return {-1}; 
    sort(res.begin(), res.end());
    return res;
}
