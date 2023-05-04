#include <iostream>
#include <iomanip>
#include <vector>
#include "student.h"

using std::endl;
using std::vector;
using std::istream;
using std::ostream;

void rank(vector<Student>& students)
{
    for(auto it = students.begin(); it != students.end(); ++it) {
        for(auto it2 = students.begin(); it2 != students.end(); ++it2) {
            if(it->sum_ > it2->sum_) {
                ++it->rank_;
            }
        }
    }
}

ostream& print(ostream& out, const vector<Student>& students)
{
    out << "--------------------------------------------" << endl;
    out << "       name          kor eng mat sum avg rnk" << endl;
    out << "--------------------------------------------" << endl;
    for (vector<Student>::const_iterator it = students.cbegin(); it != students.cend(); ++it) {
        out << *it << endl;
    }
    out << "--------------------------------------------" << endl;

    return out;
}

ostream& operator<<(ostream& out, const Student& s)
{
        out << std::setw(20) << s.name_;
        out << std::setw(4) << s.kor_ << std::setw(4) << s.eng_;
        out << std::setw(4) << s.mat_ << std::setw(4) << s.sum_;
        out << std::setw(7) << std::fixed << std::setprecision(2) << s.average_;
        out << std::setw(4) << s.rank_;
        return out;
}

Student::Student()
{
    
    
    
}

Student::Student(istream& in)
{
    
    
    
}

bool Student::operator>(const Student &rhs) const;
{
    return this->sum_ > rhs.sum_;
}

bool Student::operator<(const Student &rhs) const;


bool operator>(const Student &rhs) const;

istream& Student::read(istream& in)
{
    in >> name_ >> kor_ >> eng_ >> mat_;

    return in;
}

void Student::sum()
{
    sum_ = kor_ + eng_ + mat_
}

void Student::average()
{
    average_ = static_cast<double>(sum_) / 3.0;
}