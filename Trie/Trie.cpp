#include <iostream>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* node, string word) {
        // Base case
        if (word.length() == 0) {
            node->isTerminal = true;
            return;
        }

        // Assumption, word will be in uppercase
        int index = word[0] - 'A';
        TrieNode* child;

        // Present
        if (node->children[index] != nullptr) {
            child = node->children[index];
        } else {
            // Absent
            child = new TrieNode(word[0]);
            node->children[index] = child;
        }

        // Recursion
        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* node, string word) {
        // Base case
        if (word.length() == 0) {
            return node->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        // Present
        if (node->children[index] != nullptr) {
            child = node->children[index];
        } else {
            // Absent
            return false;
        }

        // Recursion
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word);
    }
};

int main() {
    Trie t;
    t.insertWord("ABCD");

    // Test searchWord
    if (t.searchWord("ABCD")) {
        cout << "Word found!" << endl;
    } else {
        cout << "Word not found!" << endl;
    }

    if (t.searchWord("AB")) {
        cout << "Word found!" << endl;
    } else {
        cout << "Word not found!" << endl;
    }

    if (t.searchWord("XYZ")) {
        cout << "Word found!" << endl;
    } else {
        cout << "Word not found!" << endl;
    }

    return 0;
}
