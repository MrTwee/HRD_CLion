#include <iostream>
#include <map>
#include <string>

using std::map;
using std::cin; using std::cout;
using std::endl;
using std::string;

int main()
{
    map<string, int> wordCounts;

    string s;
    while(cin >> s) {
        ++wordCounts[s];
    }

    for (map<string, int>::const_iterator it = wordCounts.cbegin(); it != wordCounts.cend(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
    return 0;
}


