#include <algorithm>
#include <iostream>
#include <string>
#include <list>
using std::cin; using std::cout;
using std::endl;
using std::list;
using std::string;

int main()
{
    list<string> titles;
    list<string>::size_type maxLen = 0;

    string line;
    while (getline(cin, line)) {
        titles.push_back(line);
        maxLen = std::max(maxLen, line.size());
    }

    list<string> frameTitles;
    frameTitles.push_back(string(maxLen + 4, '*'));
//    for (list<string>::size_type i = 0; i < titles.size(); ++i) {
//        string space(maxLen - titles[i].size(), ' ');
//        //frameTitles[i] = "* " + titles[i] + space + " ";
//        frameTitles.push_back("* " + titles[i] + space + " *");
//    }
    for(list<string>::const_iterator it = titles.cbegin(); it != titles.cend(); ++it) {
        string space(maxLen - it->size(),' ');
        frameTitles.push_back("* "+ *it + space + " *");
    }
    frameTitles.push_back(string(maxLen + 4, '*'));

//    for (list<string>::size_type i = 0; i < frameTitles.size(); ++i) {
//        cout << frameTitles[i] << endl;
//    }
    for (list<string>::const_iterator it = frameTitles.cbegin(); it != frameTitles.cend(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
