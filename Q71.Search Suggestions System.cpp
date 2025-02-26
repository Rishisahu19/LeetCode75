// class TrieNode
// {
// public:
//     TrieNode *children[26];
//     bool isTerminal;
//     vector<string> words;

//     TrieNode()
//     {
//         isTerminal = false;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = nullptr;
//         }
//     }
// };

// class Trie
// {
// public:
//     TrieNode *root;

//     Trie()
//     {
//         root = new TrieNode();
//     }

//     void insert(string word)
//     {
//         TrieNode *node = root;
//         for (char ch : word)
//         {
//             int idx = ch - 'a';
//             if (!node->children[idx])
//             {
//                 node->children[idx] = new TrieNode();
//             }
//             node = node->children[idx];
//             node->words.push_back(word);
//             sort(node->words.begin(), node->words.end());
//             if (node->words.size() > 3)
//             {
//                 node->words.pop_back();
//             }
//         }
//         node->isTerminal = true;
//     }

//     vector<string> searchPrefix(string prefix)
//     {
//         TrieNode *node = root;
//         for (char ch : prefix)
//         {
//             int idx = ch - 'a';
//             if (!node->children[idx])
//             {
//                 return {};
//             }
//             node = node->children[idx];
//         }
//         return node->words;
//     }
// };

// class Solution
// {
// public:
//     vector<vector<string>> suggestedProducts(vector<string> &products, string searchWord)
//     {
//         Trie trie;
//         sort(products.begin(), products.end());
//         for (string &product : products)
//         {
//             trie.insert(product);
//         }

//         vector<vector<string>> result;
//         string prefix = "";
//         for (char ch : searchWord)
//         {
//             prefix += ch;
//             result.push_back(trie.searchPrefix(prefix));
//         }
//         return result;
//     }
// };