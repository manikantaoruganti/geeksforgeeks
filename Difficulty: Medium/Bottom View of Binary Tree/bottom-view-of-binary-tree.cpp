class Solution {
  public:
    vector<int> bottomView(Node *root) {
        vector<int> ans;
        if (!root) return ans;
        
        map<int, int> hdNodeMap;
        // Queue for level order traversal (stores pair of node and its HD)
        queue<pair<Node*, int>> q; 
        q.push({root, 0});
        while (!q.empty()) {
            auto front = q.front();  
            q.pop(); 
            Node* node = front.first;
            int hd = front.second;
            // Overwrite node data for each HD
            hdNodeMap[hd] = node->data;
            // Left child → HD - 1
            if (node->left) q.push({node->left, hd - 1});
            // Right child → HD + 1
            if (node->right) q.push({node->right, hd + 1});
        }
        // Extract values from leftmost to rightmost HD
        for (auto it : hdNodeMap) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
