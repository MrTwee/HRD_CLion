#ifndef PROCSCORE_STUDENT_H
#define PROCSCORE_STUDENT_H
#include <iostream>
#include <string>
#include <vector>

class Student;

std::ostream& print(std::ostream& out, const std::vector<Student>& students);

class Student {
    friend void rank(std::vector<Student>& students);
    friend std::ostream& operator<<(std::ostream &out, const Student &s);

private:
    std::string name_;
    int kor_;
    int eng_;
    int mat_;
    int sum_;
    double average_;
    int rank_;

public:
    Student();
    Student(std::istream &in);

    bool operator<(const Student &rhs) const;
    bool operator>(const Student &rhs) const;

    std::istream &read(std::istream &in);

    void sum();
    void average();

};

        return s1.sum > s2.sum;
    }

    //calculate sum, avg, rank
    // <, >, <=, >=, ==, !=
};

#endif //PROCSCORE_STUDENT_H
