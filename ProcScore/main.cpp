#include <cstdlib>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "student.h"

using std::cerr;    using std::endl;
using std::ifstream; using std::ofstream;
using std::vector;



int main()
{
    ifstream in("score.dat");
    ofstream out("score.out");

    if (!in || !out) {
        std:cerr << "cant open file" << endl;
        exit(1);
    }

    vector<Student> students;

    Student s;

    while (s.read(in)) {
        s.sum();
        s.average();
        students.push_back(s);
    }

    rank(students);

    std::sort(students.begin(),students.end(), compare);

    ::print(out, student);
    return 0;
}