#include <iostream>
#include <vector>
#include <random>

int mian()
{
    std::random_device rd;

    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 99);

}

using namespace std;
int main() {
    vector<int> v1;
    for(int i = 0; i < 100; ++i) {
        int num = ???;
        v1.push_back(num);
    }
    return 0;
    srand(time(NULL));
    int sum = 0;
    for(int i = 0; i < 100; ++i) {
        v[i] = rand()%100;
    }
    vector<int>::const_iterator it;
    for (it = v.cbegin(); it != v.cend(); ++it) {
        sum += *it;
    }

    int sum = 0;
    for (vector<int>::const_iterator it = v1.cbegin(); it != v1.cend(); ++it) {
        sum += *it;
    }

    double average = sum / 100;

    cout << "sum : " << sum << '\t' << "average : " << average <<endl;
    return 0;
}
