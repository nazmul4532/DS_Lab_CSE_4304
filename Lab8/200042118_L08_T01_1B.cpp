#include <bits/stdc++.h>
 
#define ll                  long long int 
#define PI                  3.14159265359
#define am_so_cool_you_know (ios::sync_with_stdio(0), cin.tie(0),cout.tie(0));
#define kaam_shesh          return 0;
#define nl                  "\n"
 
using namespace std;

class Trie {
public:
    int trie[300005][26];
    int id = 1;
    int endmark[300005];
    int pre[300005];
    Trie() {
        memset(trie,0,sizeof(trie));
        memset(endmark,0,sizeof(endmark));
        memset(pre,0,sizeof(pre));
    }
   
    void insert(string word) {
        int row = 1;
        for(int i = 0; i < word.size(); i++)
        {
            int ch = word[i] - 'a';
            if(trie[row][ch] == 0)
            {
                trie[row][ch] = ++id;
            }
            row = trie[row][ch];
            pre[row]++;
        }
        endmark[row] = 1;
    }

    bool search(string word) {
               int row = 1;
        for(int i=0 ; i < word.size();i++)
        {
            if(word[i] == '.'){           
                for(int j = 0 ; j < 50 ; j++){
                    if (trie[row][j] != 0)
                    {
                        word[i] = j + 'a';
                        bool flag = search(word);
                        if(flag == true)
                        {
                            return true;
                        }
                    }
                }
            }
            else{
                int ch = word[i] - 'a';
                if(trie[row][ch] == 0) return false;
                row = trie[row][ch];
            }
        }
        return (endmark[row] == 1);
    }
    bool startsWith(string prefix) {
        int row = 1;
        for(int i = 0; i < prefix.size();i++)
        {
            int ch = prefix[i] - 'a';
            if(trie[row][ch] == 0) return false;
            row = trie[row][ch];

        }
        return (pre[row] >= 1);
    }
};

class WordDictionary {
    public:
        Trie *dictionary;
        WordDictionary()
        {
            dictionary = new Trie();
            cout << "Object Created"<<nl;
        }
        void addWord(string word)
        {
            dictionary->insert(word);
            cout << "Word Added." << nl;
        }
        void searchWord(string word)
        {
            bool flag = dictionary->search(word);
            if(flag == true)
            {
                cout << "Word Found."<<nl;
            }
            else
            {
                cout << "Word Not Found."<<nl;
            }
        }
};

int main()
{
    am_so_cool_you_know;
    // cin>>
    // cout<<
    // sort(arr,arr+length)
    // 706B has binary search
    // * Trie* obj = new Trie();
    // * obj->insert(word);
    // * bool param_2 = obj->search(word);
    // * bool param_3 = obj->startsWith(prefix);
    WordDictionary* wd = new WordDictionary();
    string word;
    cin >> word;
    wd->addWord(word);
    cin >> word;
    wd->addWord(word);
    cin >> word;
    wd->addWord(word);
    cin >> word;
    wd->addWord(word);
    cin >> word;
    wd->searchWord(word);
    cin >> word;
    wd->searchWord(word);
    cin >> word;
    wd->searchWord(word);
    cin >> word;
    wd->searchWord(word);
    kaam_shesh;
}
