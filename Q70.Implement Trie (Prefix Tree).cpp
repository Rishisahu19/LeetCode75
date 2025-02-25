// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isTerminal;

//     TrieNode(char d)
//     {
//         this->data = d;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = nullptr;
//         }
//         this->isTerminal = false;
//     }
// };

// class Trie
// {
// public:
//     TrieNode *root;

//     Trie() { root = new TrieNode('-'); }

//     void insertWord(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }

//         char ch = word[0];
//         int idx = ch - 'a'; // Only handle lowercase letters

//         TrieNode *child;
//         if (root->children[idx] != NULL)
//         {
//             child = root->children[idx];
//         }
//         else
//         {
//             child = new TrieNode(ch);
//             root->children[idx] = child;
//         }

//         insertWord(child, word.substr(1));
//     }

//     void insert(string word) { insertWord(root, word); }

//     bool searchWord(TrieNode *root, string word)
//     {
//         if (word.length() == 0)
//         {
//             return root->isTerminal;
//         }

//         char ch = word[0];
//         int idx = ch - 'a'; // Only handle lowercase letters

//         TrieNode *child;
//         if (root->children[idx] != NULL)
//         {
//             child = root->children[idx];
//         }
//         else
//         {
//             return false;
//         }

//         return searchWord(
//             child, word.substr(1)); // Recursively search for the remaining word
//     }

//     bool search(string word) { return searchWord(root, word); }

//     bool startsWithME(TrieNode *root, string prefix)
//     {
//         for (int i = 0; i < prefix.size(); i++)
//         {
//             char ch = prefix[i];
//             int idx = ch - 'a'; // Only handle lowercase letters

//             if (root->children[idx] != nullptr)
//             {
//                 root = root->children[idx];
//             }
//             else
//             {
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool startsWith(string prefix) { return startsWithME(root, prefix); }
// };

// /**
//  * Your Trie object will be instantiated and called as such:
//  * Trie* obj = new Trie();
//  * obj->insert(word);
//  * bool param_2 = obj->search(word);
//  * bool param_3 = obj->startsWith(prefix);
//  */
