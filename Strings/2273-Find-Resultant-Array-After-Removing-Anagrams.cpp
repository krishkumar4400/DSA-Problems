#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string>removeAnagrams(vector<string>&words) {
    vector<string>result;
    result.push_back(words[0]);

    for(int i = 0; i < words.size(); i++) {
        string prev = result.back();

        string sortedPrev = prev;
        string sortedCurr = words[i];

        sort(sortedPrev.begin(), sortedPrev.end());
        sort(sortedCurr.begin(), sortedCurr.end());

        if(sortedCurr != sortedPrev) {
            result.push_back(words[i]);
        }
    }
    return result;
}

void printResult(vector<string>result) {
    cout<<"The Result After Removing Anagrams:\n";
    for(string word : result) {
        cout << word << " ";
    }
    cout<<endl;
}

int main() {
    vector<string>words = {"abbaa", "baba", "bbaa", "cd", "cd"};
    vector<string>result = removeAnagrams(words);
    printResult(result); // abbaa baba cd

    return 0;
}