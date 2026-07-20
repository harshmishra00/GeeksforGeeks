class Solution {
  public:
    
    struct TrieNode {
        TrieNode* child[26];
        int cnt;

        TrieNode() {
            cnt = 0;
            for (int i = 0; i < 26; i++)
                child[i] = NULL;
        }
    };

    TrieNode* root = new TrieNode();

    // Insert word into Trie
    void insert(string &word) {
        TrieNode* node = root;

        for (char ch : word) {
            int idx = ch - 'a';

            if (node->child[idx] == NULL)
                node->child[idx] = new TrieNode();

            node = node->child[idx];
            node->cnt++;
        }
    }

    vector<string> findPrefixes(vector<string>& arr) {

        // Build Trie
        for (string &word : arr)
            insert(word);

        vector<string> ans;

        // Find unique prefix for each word
        for (string &word : arr) {
            TrieNode* node = root;
            string prefix = "";

            for (char ch : word) {
                int idx = ch - 'a';
                node = node->child[idx];
                prefix += ch;

                if (node->cnt == 1)
                    break;
            }

            ans.push_back(prefix);
        }

        return ans;
    }
};