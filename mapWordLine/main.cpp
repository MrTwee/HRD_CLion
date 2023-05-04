#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

//vector<string>& split(string s)
void split(const string& s, vector<string>& words)
{
    //vector<stirng> words;

    //return words;
}

int main() {
    map<string, vector<int> > wordLines;

    int lineNumber = 1;
    string s;
    while (getline(cin,s)) {
        vector<string> v;
        split(s, v);

                for(auot it = v.cbegin(); it v.cend(); ++it) {
            wordLines[*it].push_back(lineNumber);
        }
        ++lineNumber
    }
    for (auto it = wordLines.cbegin(); it != wordLines.cend(); ++it) {
        cout << it ->first << " : ";
        for (auto it2 = it = it -> second.cbegin(); it2 != it->second.cend(); ++it2) {
            cout << *it << ", ";
        }
        cout << endl;
    }

    return 0;
}
